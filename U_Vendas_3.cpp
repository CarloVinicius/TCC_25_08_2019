//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "U_Vendas_3.h"
#include "U_Vendas_2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button4Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm3::NavigatorBindSourceClientesClick(TObject *Sender, TNavigateButton Button)

{
 Edit2->Enabled = True;
 Edit3->Enabled = True;
 Edit3->Enabled = True;
 Edit4->Enabled = True;
 Edit5->Enabled = True;
 Edit6->Enabled = True;
 Edit7->Enabled = True;
 Edit8->Enabled = True;
 Edit9->Enabled = True;
 Edit10->Enabled = True;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
 Form2->Visible = False;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
  Form3->Close();
  Form2->Visible = True;
}
//---------------------------------------------------------------------------

