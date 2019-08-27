//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "U_Vendas_1.h"
#include "U_Vendas_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.iPhone4in.fmx", _PLAT_IOS)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 Form2 = new TForm2(Application);
	Form2->ShowModal();


}
//---------------------------------------------------------------------------


