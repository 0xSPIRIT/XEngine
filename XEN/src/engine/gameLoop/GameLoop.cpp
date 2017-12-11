#include "GameLoop.h"

xen::GameLoop::GameLoop(const Window& window) : m_Window(window) { }

void xen::GameLoop::run(void (*update)(float dt), void (*render)()) {
	counter.init();
	while (!glfwWindowShouldClose(m_Window.getGLFWwindow())) {
		glfwPollEvents();

		update(counter.getDeltaTime());
		render();
		glfwSwapBuffers(m_Window.getGLFWwindow());
		counter.evaluate();
	}
}