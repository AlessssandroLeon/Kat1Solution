#include "AdminisitradorForm.h"
#include "OperarioForm.h"
#include "LoginUsuario.h"
using namespace Kat1GUI;

[STAThreadAttribute]
//probando github
int main() {
	LoginUsuario^ mainForm = gcnew LoginUsuario();
	Application::Run(mainForm);
	return 0;
}
