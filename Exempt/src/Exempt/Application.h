#pragma once
#include "Core.h"

namespace Exempt {

	class EX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};

	//To be defined in CLIENT
	Exempt::Application* CreateApplication();

}

