#pragma once

#include "Kryonics/Layer.h"

#include "Kryonics/Events/ApplicationEvent.h"
#include "Kryonics/Events/KeyEvent.h"
#include "Kryonics/Events/MouseEvent.h"

namespace Kryonics {

	class KRYONICS_API ImGuiLayer : public Layer
	{
	public:
		ImGuiLayer();
		~ImGuiLayer() = default;

		virtual void OnAttach() override;
		virtual void OnDetach() override;
		virtual void OnImGuiRender() override;

		void Begin();
		void End();
	private:
		float m_Time = 0.0f;
	};

}
