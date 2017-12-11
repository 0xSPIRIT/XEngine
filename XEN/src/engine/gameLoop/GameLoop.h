#pragma once

#include "../renderEngine/Window.h"
#include "FPSCounter.h"

namespace xen {
	class GameLoop {
	public:
		GameLoop(const Window& window);

		void run(void(*update)(float dt), void(*render)());
	private:
		Window m_Window;
		FPSCounter counter;
	};
}