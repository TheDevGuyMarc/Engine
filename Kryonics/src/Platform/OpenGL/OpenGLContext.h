#pragma once

#include "Kryonics/Renderer/GraphicsContext.h"

struct GLFWwindow;

namespace Kryonics {
	class OpenGLContext : public GraphicsContext
	{
	public:
		OpenGLContext(GLFWwindow* windowHandle);

		virtual void Init() override;
		virtual void SwapBuffers() override;
	private:
		GLFWwindow* m_WindowHandle;
	};
}
