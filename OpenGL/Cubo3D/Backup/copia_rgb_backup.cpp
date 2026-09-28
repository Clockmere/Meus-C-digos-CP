#include <glad/glad.h>
#include <GLFW/glfw3.h>

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

    // iniciando variáveis
    GLfloat speed = 0.01f;
    int estado = 0;
    int loops = 0;

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

        glfwSwapBuffers(window);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}