#include "Menu1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto1GabrielSam1037420::Menu1 form;
	Application::Run(% form);
	return 0;
}
