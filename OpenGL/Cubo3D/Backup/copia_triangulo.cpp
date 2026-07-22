#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Shader (Código feito pra GPU desenhar vetores) em GLSL
// vertex
const char* vertexShaderSource = R"(
#version 330 core

layout (location = 0) in vec2 aPos;

void main() {gl_Position = vec4(aPos, 0.0, 1.0);}
)";
// fragment
const char* fragmentShaderSource = R"(
#version 330 core

out vec4 FragColor;

void main() {FragColor = vec4(0.0f, 0.0f, 0.0f, 1.0f);}
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
    float vertices[] = { 
        0.0f, 0.32f, // ponto 1 (encima) 
        -0.32, -0.32f, // ponto 2 (base_esquerda) 
        0.32f, -0.32f // ponto 3 (base_direita) 
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

    // manual de "interpretação"
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE,
    2*sizeof(float), nullptr);
    glEnableVertexAttribArray(0);

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

    // iniciando variáveis para o fundo RGB
    GLfloat speed = 0.01f;
    int estado = 0;

    GLfloat red = 1.0f;
    GLfloat green = 0.0f;
    GLfloat blue = 0.0f;

    // "game loop"
    while (!glfwWindowShouldClose(window)) {
        // alternando RGB
        if (estado == 0) {
            red -= speed;
            green += speed;

            if (red <= 0 && green >= 1) {estado = 1;}

        } else if (estado == 1) {
            green -= speed;
            blue += speed;

            if (green <= 0 && blue >= 1) {estado = 2;}

        } else if (estado == 2) {
            blue -= speed;
            red += speed;

            if (blue <= 0 && red >= 1) {estado = 0;}
        }

        glClearColor(red, green, blue, 1.0f);
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