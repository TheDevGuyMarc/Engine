#include "kepch.h"
#include "RenderCommand.h"

#include "Platform/OpenGL/OpenGLRendererAPI.h"

namespace Kryonics {
    RendererAPI* RenderCommand::s_RendererAPI = new OpenGLRendererAPI;
}

