#include "Application.h"

#include "Events/ApplicaitonEvent.h"
#include "Log.h"

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
