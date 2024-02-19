#include "StartPage.h"

using namespace ProjectPower6rangers;

int main() {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault;
	Application::Run(gcnew StartPage());
}