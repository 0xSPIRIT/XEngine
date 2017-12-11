#pragma once

namespace xen {
	class FPSCounter {
	public:
		FPSCounter() {}

		void init();
		float evaluate();

		const float getDeltaTime() const { return m_DeltaTime; }
		const float getFPS() const { return m_Fps; }
	private:
		float m_LastTime = 0;
		float m_Time = 0;
		float m_DeltaTime = 0;
		int m_Fps = 0;
	};
}