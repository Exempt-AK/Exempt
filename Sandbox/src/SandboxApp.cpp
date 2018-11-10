#include <Exempt.h>

class Sandbox : public Exempt::Application
{
public:
	Sandbox() {}
	~Sandbox() {}
};

Exempt::Application* Exempt::CreateApplication()
{
	return new Sandbox();
}