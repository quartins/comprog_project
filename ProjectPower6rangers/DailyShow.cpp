#include "DailyShow.h"
#include "MenuPage.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectPower6rangers::DailyShow dsform;
	ProjectPower6rangers::MenuPage mpform;
}
