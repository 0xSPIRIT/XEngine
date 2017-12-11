#include "FPSCounter.h"

#include "../renderEngine/Window.h"

void xen::FPSCounter::init() {
	m_LastTime = (float) glfwGetTime();
}

float xen::FPSCounter::evaluate() {
	m_DeltaTime = (float) glfwGetTime() - m_LastTime;
	m_Time += m_DeltaTime;

	m_Fps++;
	if (m_Time >= 1) {
		std::cout << "FPS: " << m_Fps << std::endl;
		m_Time = 0;
		m_Fps = 0;
	}
	m_LastTime = glfwGetTime();
	return m_DeltaTime;
}
