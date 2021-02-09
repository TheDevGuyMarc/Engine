#pragma once
// Header files that will be used by applications (API Definition)

#include "Kryonics/Application.h"

// ---Graphics Layer Implementation---------------------
#include "Kryonics/Layer.h"
// -----------------------------------------------------

// ---Logging Wrapper-----------------------------------
#include "Kryonics/Log.h"
// -----------------------------------------------------

// ---Timesteps-----------------------------------------
#include "Kryonics/Core/Timestep.h"
// -----------------------------------------------------

// ---User Input----------------------------------------
#include "Kryonics/Input.h"
#include "Kryonics/KeyCodes.h"
#include "Kryonics/MouseButtonCodes.h"
// -----------------------------------------------------

// ---ImGui Layer Implementation------------------------
#include "Kryonics/ImGui/ImGuiLayer.h"
// -----------------------------------------------------

// ---2D Renderer Implementation------------------------
#include "Kryonics/Renderer/Renderer.h"
#include "Kryonics/Renderer/RenderCommand.h"

#include "Kryonics/Renderer/Buffer.h"
#include "Kryonics/Renderer/Shader.h"
#include "Kryonics/Renderer/Texture.h"
#include "Kryonics/Renderer/VertexArray.h"

#include "Kryonics/Renderer/OrthographicCamera.h"
// -----------------------------------------------------

// ---Entry Point---------------------------------------
#include "Kryonics/EntryPoint.h"
// -----------------------------------------------------
