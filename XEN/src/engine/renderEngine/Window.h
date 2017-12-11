#pragma once

#include <glfw3.h>
#include "../utils/Errors.h"

namespace xen {
	class Window {
	public:
		Window(int width, int height, const char* title);
		~Window();

		GLFWwindow* getGLFWwindow() { return m_Window; }

		int getWidth() const { return m_Width; }
		int getHeight() const { return m_Height; }
		const char* getTitle() const { return m_Title; }
	private:
		GLFWwindow* m_Window;

		int m_Width, m_Height;
		const char* m_Title;
	};
}