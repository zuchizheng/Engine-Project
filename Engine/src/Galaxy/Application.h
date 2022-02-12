#pragma once
#include "Core.h"

namespace Galaxy {
	class GALAXY_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}


