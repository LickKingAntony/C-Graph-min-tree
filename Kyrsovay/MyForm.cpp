
#include "MyForm.h"
#include <Windows.h>
#include <fstream>
#include <iostream>
//#include <msclr\marshal_cppstd.h>
using namespace Kyrsovay;

[STAThreadAttribute]

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	/*MyForm form;*/
	/*Application::Run(% form);*/
	Application::Run(gcnew MyForm());
	return 0;
}