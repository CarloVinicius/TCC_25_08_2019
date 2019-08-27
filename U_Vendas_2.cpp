//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "U_Vendas_2.h"
#include "U_Vendas_1.h"
#include "U_Vendas_3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
 Application ->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 Form3 = new TForm3(Application);
	Form3->ShowModal();

}
//---------------------------------------------------------------------------






void __fastcall TForm2::FormShow(TObject *Sender)
{
 Form1->Visible = False;
}
//---------------------------------------------------------------------------

