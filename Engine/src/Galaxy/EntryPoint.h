#pragma once

#ifdef  GX_PLATFORM_WINDOWS

extern Galaxy::Application* Galaxy::CreateApplication();

int main(int argc, char** argv) 
{
	printf("Galaxy Init");
	auto app = Galaxy::CreateApplication();
	app->Run();
	delete app;
}

#endif //  GX_PLATFORM_WINDOWS

