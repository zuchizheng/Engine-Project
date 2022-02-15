#include "gxpch.h"

#include "Application.h"

#include "Galaxy/Events/ApplicaitonEvent.h"
#include "Galaxy/Log.h"

namespace Galaxy {
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		WindowResizeEvent e(1200, 720);
		if (e.IsInCategoty(EventCategoryApplication))
		{
			GX_TRACE(e);
		}
		if (e.IsInCategoty(EventCategoryInput))
		{
			GX_TRACE(e);
		}
		while (true);

	}
}
