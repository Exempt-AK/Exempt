#pragma once

#ifdef EX_PLATFORM_WINDOWS

extern Exempt::Application* Exempt::CreateApplication();

int main(int argc, char* argv[])
{
	auto app = Exempt::CreateApplication();
	app->Run();
	delete app;
}

#endif