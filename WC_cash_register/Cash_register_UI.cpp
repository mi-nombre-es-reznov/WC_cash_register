#include "Cash_register_UI.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WCcashregister::Cash_register_UI form;
	Application::Run(%form);
}