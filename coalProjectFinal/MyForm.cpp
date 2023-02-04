#include "MyForm.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
using namespace System;

using namespace System::Windows::Forms;


string tbu0;

string ramData[32];
int pc;

[STAThreadAttribute]

int Main()

{

	Application::EnableVisualStyles(); Application::SetCompatibleTextRenderingDefault(false); coalProjectFinal::MyForm form; Application::Run(% form);


	cout << tbu0;


	return 0;
}

