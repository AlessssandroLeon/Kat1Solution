#include "AdminisitradorForm.h"
#include "OperarioForm.h"
using namespace Kat1GUI;

[STAThreadAttribute]
int main() {
	OperarioForm^ mainForm = gcnew OperarioForm();
	Application::Run(mainForm);
	return 0;
}
