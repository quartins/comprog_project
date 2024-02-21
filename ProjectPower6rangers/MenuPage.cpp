#include "MenuPage.h"
#include "DailyShow.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectPower6rangers::DailyShow dsform;
	ProjectPower6rangers::MenuPage mpform;

	dsform.DsToMenu = true;

	while (true) {
		if (dsform.DsToMenu == true) {
			mpform.ShowDialog();
			dsform.DsToMenu = false;
		}
		else break;
	}
}
