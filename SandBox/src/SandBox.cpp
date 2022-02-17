#include "Galaxy.h"
#include "Galaxy/EntryPoint.h"

class ExamplerLayer : public Galaxy::Layer
{
public:
	ExamplerLayer()
		: Layer("Example")
	{

	}

	void OnUpdate() override
	{
		GX_INFO("ExampleLayer::Update");
	}

	void OnEvent(Galaxy::Event& event) override
	{
		GX_TRACE("{0}", event);
	}
};



class SandBox : public Galaxy::Application
{
public:
	SandBox()
	{
		
		PushLayer(new ExamplerLayer());
		PushOverlay(new Galaxy::ImGuiLayer());
	}

	~SandBox()
	{

	}

private:

};

Galaxy::Application* Galaxy::CreateApplication()
{
	return new SandBox();
}
