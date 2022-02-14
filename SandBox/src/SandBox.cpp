#include "Galaxy.h"
#include "Galaxy/EntryPoint.h"

class SandBox : public Galaxy::Application
{
public:
	SandBox()
	{

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
