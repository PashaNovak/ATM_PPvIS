// ATM_PPvIS.cpp: ������� ���� �������.

#include "stdafx.h"
#include "classes.h"
#include "Form1.h"
#include "Form2.h"
#include "Form3.h"
#include "Form4.h"

using namespace ATM_PPvIS;

ATM bel;
_myGet_m g;
balance bell;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������	
	for( ; ; ) {
		switch(bel.i) {
		case 1:
			Application::Run(gcnew Form1());
			break;
		case 2:
			Application::Run(gcnew Form2());
			break;
		case 3:
			Application::Run(gcnew Form3());
			break;
		case 4:
			Application::Run(gcnew Form4());
			break;
		default:
			return 0;
	    }
   }
}