#pragma once
// Entrypoint defines an Entrypoint for Kryonics, to decouple applications from Kryonics. This allows an developer to use Kryonics as an API
#ifdef KE_PLATFORM_WINDOWS

extern Kryonics::Application* Kryonics::CreateApplication();

int main(int argc, char** argv) {
	Kryonics::Log::Init();
	KE_CORE_INFO("Initialized Logging");

	auto app = Kryonics::CreateApplication();
	app->Run();
	delete app;
}
#endif

