#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace Galaxy {

	class GALAXY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger; 
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}
//Core log macros
#define GX_CORE_TRACE(...)    ::Galaxy::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GX_CORE_INFO(...)     ::Galaxy::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GX_CORE_WARN(...)     ::Galaxy::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GX_CORE_ERROR(...)    ::Galaxy::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GX_CORE_FATAL(...)    ::Galaxy::Log::GetCoreLogger()->fatal(__VA_ARGS__)
//Client log macros
#define GX_TRACE(...)         ::Galaxy::Log::GetClientLogger()->trace(__VA_ARGS__)
#define GX_INFO(...)          ::Galaxy::Log::GetClientLogger()->info(__VA_ARGS__)
#define GX_WARN(...)          ::Galaxy::Log::GetClientLogger()->warn(__VA_ARGS__)
#define GX_ERROR(...)         ::Galaxy::Log::GetClientLogger()->error(__VA_ARGS__)
#define GX_FATAL(...)         ::Galaxy::Log::GetClientLogger()->fatal(__VA_ARGS__)
