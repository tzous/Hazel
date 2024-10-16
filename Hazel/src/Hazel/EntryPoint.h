#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();
	Hazel::Log::GetCoreLogger()->warn("Initialized Log!");
	//Hazel::Log::GetClientLogger()->info("Hello!");
	//HZ_CORE_ERROR("Core Error!");
	int a = 5;
	HZ_CLIENT_INFO("Client Info! Var={0}",a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif

