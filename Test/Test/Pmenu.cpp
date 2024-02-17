#include "Pmenu.h"

using namespace Test;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Pmenu());
}