#include "Autor.h"
#include "Plansza.h"
#include "Powitanie.h"

using namespace Strefanoid;

void ZamykajOkno(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0)
	{
		Application::Exit();
	}
	else
	{
		Application::OpenForms[0] ->FormClosed += gcnew FormClosedEventHandler(ZamykajOkno);
	}
}




[STAThreadAttribute]

int main(array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Powitanie^ pierw = gcnew Powitanie();
	pierw->FormClosed += gcnew FormClosedEventHandler(ZamykajOkno);
	pierw->Show();
	Application::Run();
	return 0;
}