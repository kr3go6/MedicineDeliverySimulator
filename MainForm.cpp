#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();

	PrakCLR::MainForm form;
	Application::Run(% form);
}
