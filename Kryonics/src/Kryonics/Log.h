#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Kryonics {
	/*
		Logging Wrapper for SPDLog Library
	*/
	class KRYONICS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger;  }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger;  }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define KE_CORE_CRITICAL(...)		::Kryonics::Log::GetCoreLogger()->critical(__VA_ARGS__)
#define KE_CORE_ERROR(...)			::Kryonics::Log::GetCoreLogger()->error(__VA_ARGS__)
#define KE_CORE_WARN(...)			::Kryonics::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define KE_CORE_INFO(...)			::Kryonics::Log::GetCoreLogger()->info(__VA_ARGS__)
#define KE_CORE_TRACE(...)			::Kryonics::Log::GetCoreLogger()->trace(__VA_ARGS__)

// Client log macros
#define KE_CLIENT_CRITICAL(...)		::Kryonics::Log::GetClientLogger()->critical(__VA_ARGS__)
#define KE_CLIENT_ERROR(...)		::Kryonics::Log::GetClientLogger()->error(__VA_ARGS__)
#define KE_CLIENT_WARN(...)			::Kryonics::Log::GetClientLogger()->warn(__VA_ARGS__)
#define KE_CLIENT_INFO(...)			::Kryonics::Log::GetClientLogger()->info(__VA_ARGS__)
#define KE_CLIENT_TRACE(...)		::Kryonics::Log::GetClientLogger()->trace(__VA_ARGS__)
