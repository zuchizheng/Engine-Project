#pragma once

#ifdef  GX_PLATFORM_WINDOWS

extern Galaxy::Application* Galaxy::CreateApplication();

int main(int argc, char** argv) 
{
	Galaxy::Log::Init();
	GX_CORE_WARN("Initialized Log!");
	int a = 5;
	GX_TRACE("Hello! Var={0}", a);
	
	auto app = Galaxy::CreateApplication();
	app->Run();
	delete app;
}

#endif //  GX_PLATFORM_WINDOWS

