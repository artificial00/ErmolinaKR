#include "HelloScreen.h"
#include <Windows.h>
using namespace ErmolinaKR;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew HelloScreen);
	return 0;
}

