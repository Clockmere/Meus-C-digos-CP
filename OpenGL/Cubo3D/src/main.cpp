#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Shader (Código feito pra GPU desenhar vetores) em GLSL
// vertex
const char* vertexShaderSource = R"(
#version 330 core

layout(location = 0) in vec2 aPos;
layout(location = 1) in vec3 aColor;

out vec3 ourColor;

void main() {
    gl_Position = vec4(aPos, 0.0, 1.0);
    ourColor = aColor;
}
)";
// fragment
const char* fragmentShaderSource = R"(
#version 330 core

in vec3 ourColor;
out vec4 FragColor;

void main() {FragColor = vec4(ourColor, 1.0);}
)";

int main () {
    // inicializando o GLFW
    if (!glfwInit()) {
        return -1;
    }

    // criando a janela
    GLFWwindow* window = glfwCreateWindow(1280, 720,
    "Cubo", NULL, NULL);
    
    if (window == NULL) {
        glfwTerminate();
        return -1;
    }

    // escolhendo a janela pro OpenGL (via GLAD) desenhar
    // criação do contexto OpenGL
    glfwMakeContextCurrent(window);

    // pegando o endereço das funções do OpenGL
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        return -1;
    }

    // criando pontos dos vértices de um triangulo
    // -1 até +1 é o espaço da tela para o OpenGL
    // [x y] [r g b]
    float vertices[] = {
        0.0f, 0.5f, 1.0f, 0.0f, 0.0f,
        -0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
        0.5f, -0.5f, 0.0f, 1.0f, 0.0f
    };

    // criando um VBO (Vertex Buffer Object)
    // com ele armazenamos atributos dos vértices
    GLuint VBO;
    glGenBuffers(1, &VBO);
    // selecionamos para usar esse buffer
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    // inserimos os valores para dentro desse buffer
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices),
    vertices, GL_STATIC_DRAW);

    // criando um VAO (Vertex Array Object)
    GLuint VAO;
    glGenVertexArrays(1, &VAO);
    // selecionamos esse VAO
    glBindVertexArray(VAO);

    // manual de "interpretação" para localização
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE,
    5*sizeof(float), nullptr);
    glEnableVertexAttribArray(0);
    // cor
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE,
    5*sizeof(float), (void*)(2*sizeof(float)));
    glEnableVertexAttribArray(1);

    // criando o objeto shader na GPU e mandando pro objeto shader
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1,
    &vertexShaderSource, nullptr);
    // compilando esse código GLSL
    glCompileShader(vertexShader);

    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1,
    &fragmentShaderSource, nullptr);
    glCompileShader(fragmentShader);

    // "executável" dos shaders
    GLuint shaderProgram = glCreateProgram();
    // colocando vertex e fragment dentro
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    // limpando depois de linkar
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    // "game loop"
    while (!glfwWindowShouldClose(window)) {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(shaderProgram);
        glBindVertexArray(VAO);

        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // destruir e encerrar
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteProgram(shaderProgram);
    glfwTerminate();
    return 0;
}