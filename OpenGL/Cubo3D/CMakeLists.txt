cmake_minimum_required(VERSION 3.16)

project(OpenGL_Cubo3D)

set(CMAKE_CXX_STANDARD 17)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(OpenGL_Cubo3D
    src/main.cpp
    external/glad/src/glad.c
)

target_include_directories(OpenGL_Cubo3D PRIVATE
    external/glad/include
)

target_link_libraries(OpenGL_Cubo3D PRIVATE
    glfw
    OpenGL::GL
)