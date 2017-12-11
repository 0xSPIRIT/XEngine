#include "Window.h"

xen::Window::Window(int w, int h, const char* t) {
	if (!glfwInit()) {
		Errors::fatal("Failed to initialize GLFW!");
	}

	m_Width  =  w;
	m_Height =  h;
	m_Title  =  t;
	m_Window =  glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
	if (!m_Window) {
		Errors::fatal("Failed to create the window!");
	}

	glfwMakeContextCurrent(m_Window);
}

xen::Window::~Window() {
	glfwDestroyWindow(m_Window);
	glfwTerminate();
}