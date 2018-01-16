//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "parse.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
  TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

AnsiString FilesName[4];


//для хранения истории надо заменить компонент tmemo на trichedit, при этом
//он должен быть версии 2.0 - сделаем это вручную, т.к. автоматом билдер не хочет 9подставляет версию 1)
class MyRichEdit : public TRichEdit
{
   public:
   __fastcall MyRichEdit(TComponent *Owner) : TRichEdit(Owner){}
   void __fastcall CreateParams(TCreateParams& Params)
   {
      TRichEdit::CreateParams(Params);
      CreateSubClass(Params, "RichEdit20A");
   }
};
 MyRichEdit *Memo1;



void __fastcall TForm1::N2Click(TObject *Sender)
{
int i, j;
if( OpenDialog1->Execute())
 {
  Memo1->Lines->LoadFromFile(OpenDialog1->FileName);

  //создание "истории"
  for (i = 0; i< 4; i++)
    if (FilesName[i] == "<empty>")
   {
    FilesName[i] = OpenDialog1->FileName;
    break;
   }


   if (i == 4)
    {
      FilesName[3] = FilesName[2];
      FilesName[2] = FilesName[1];
      FilesName[1] = FilesName[0];
      FilesName[0] = OpenDialog1->FileName;
    }

   F1->Caption = FilesName[0];
   F2->Caption = FilesName[1];
   F3->Caption = FilesName[2];
   F4->Caption = FilesName[3];
 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N3Click(TObject *Sender)
{
if(SaveDialog1->Execute())
Memo1->Lines->SaveToFile(SaveDialog1->FileName+".txt"+".doc"+".docx");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton2Click(TObject *Sender)
{
if(SaveDialog1->Execute())
Memo1->Lines->SaveToFile(SaveDialog1->FileName +  ".txt"+".doc"+".docx");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
if (PrintDialog1->Execute() )
for (int i=1;i<=PrintDialog1->Copies;i++);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N32Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N7Click(TObject *Sender)
{
Memo1->Undo();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton4Click(TObject *Sender)
{
 Memo1->Undo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N9Click(TObject *Sender)
{
Memo1->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton6Click(TObject *Sender)
{
Memo1->CopyToClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
Memo1->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton7Click(TObject *Sender)
{
Memo1->CutToClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
Memo1->PasteFromClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton8Click(TObject *Sender)
{
Memo1->PasteFromClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N12Click(TObject *Sender)
{
Memo1->ClearSelection();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N13Click(TObject *Sender)
{
Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
FindDialog1->FindText=Memo1->SelText;
FindDialog1->Execute();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject *Sender)
{
Memo1->SelectAll();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N17Click(TObject *Sender)
{
FontDialog1->Font=Memo1->Font;
if(FontDialog1->Execute())
Memo1->Font=FontDialog1->Font;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N19Click(TObject *Sender)
{
Memo1->Alignment=taLeftJustify;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton16Click(TObject *Sender)
{
Memo1->Alignment=taLeftJustify;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N20Click(TObject *Sender)
{
Memo1->Alignment=taRightJustify;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton18Click(TObject *Sender)
{
Memo1->Alignment=taRightJustify;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N21Click(TObject *Sender)
{
Memo1->Alignment=taCenter;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton17Click(TObject *Sender)
{
Memo1->Alignment=taCenter;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N23Click(TObject *Sender)
{
if (!N23->Checked)
Memo1->Font->Style=Memo1->Font->Style<<fsBold;
else
Memo1->Font->Style=Memo1->Font->Style>>fsBold;
N23->Checked=!N23->Checked;
Memo1->SetFocus();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton12Click(TObject *Sender)
{
if (!N23->Checked)
Memo1->Font->Style=Memo1->Font->Style<<fsBold;
else
Memo1->Font->Style=Memo1->Font->Style>>fsBold;
N23->Checked=!N23->Checked;
Memo1->SetFocus();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N24Click(TObject *Sender)
{
if (!N24->Checked)
Memo1->Font->Style=Memo1->Font->Style<<fsItalic;
else
Memo1->Font->Style=Memo1->Font->Style>>fsItalic;
N24->Checked=!N24->Checked;
Memo1->SetFocus();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton13Click(TObject *Sender)
{
if (!N24->Checked)
Memo1->Font->Style=Memo1->Font->Style<<fsItalic;
else
Memo1->Font->Style=Memo1->Font->Style>>fsItalic;
N24->Checked=!N24->Checked;
Memo1->SetFocus();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N25Click(TObject *Sender)
{
if (!N25->Checked)
Memo1->Font->Style=Memo1->Font->Style<<fsUnderline;
else
Memo1->Font->Style=Memo1->Font->Style>>fsUnderline;
N25->Checked=!N25->Checked;
Memo1->SetFocus();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton14Click(TObject *Sender)
{
if (!N25->Checked)
Memo1->Font->Style=Memo1->Font->Style<<fsUnderline;
else
Memo1->Font->Style=Memo1->Font->Style>>fsUnderline;
N25->Checked=!N25->Checked;
Memo1->SetFocus();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ToolButton10Click(TObject *Sender)
{
FontDialog1->Font=Memo1->Font;
if(FontDialog1->Execute())
Memo1->Font=FontDialog1->Font;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N26Click(TObject *Sender)
{
Memo1->WordWrap=!Memo1->WordWrap;
N26->Checked=!N26->Checked;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N28Click(TObject *Sender)
{
ToolBar1->Visible=!ToolBar1->Visible;
N28->Checked=!N28->Checked;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N30Click(TObject *Sender)
{
AboutBox->ShowModal();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::FormActivate(TObject *Sender)
{
  TIniFile *RegFile;
  RegFile = new TIniFile(ExtractFilePath(Application->ExeName) + "prog.ini"); //открываем ini файл

  FilesName[0] = RegFile->ReadString("Names", "1", "<empty>");
  FilesName[1] = RegFile->ReadString("Names", "2", "<empty>");
  FilesName[2] = RegFile->ReadString("Names", "3", "<empty>");
  FilesName[3] = RegFile->ReadString("Names", "4", "<empty>");

 RegFile->Free();

   F1->Caption = FilesName[0];
   F2->Caption = FilesName[1];
   F3->Caption = FilesName[2];
   F4->Caption = FilesName[3];

   //задаем кол-во шагов отмены
 Memo1->Perform(EM_SETUNDOLIMIT, 100, 0);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  TIniFile *RegFile;
  RegFile = new TIniFile(ExtractFilePath(Application->ExeName)+ "prog.ini"); //открываем ini файл

  RegFile->WriteString("Names", "1", FilesName[0]);
  RegFile->WriteString("Names", "2", FilesName[1]);
  RegFile->WriteString("Names", "3", FilesName[2]);
  RegFile->WriteString("Names", "4", FilesName[3]);

  RegFile->Free();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::F4Click(TObject *Sender)
{
  if (Sender == F1) if (FilesName[0] != "<empty>") Memo1->Lines->LoadFromFile(FilesName[0]);
  if (Sender == F2) if (FilesName[1] != "<empty>") Memo1->Lines->LoadFromFile(FilesName[1]);
  if (Sender == F3) if (FilesName[2] != "<empty>") Memo1->Lines->LoadFromFile(FilesName[2]);
  if (Sender == F4) if (FilesName[3] != "<empty>") Memo1->Lines->LoadFromFile(FilesName[3]);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N34Click(TObject *Sender)
{
ReplaceDialog1->FindText=Memo1->SelText;
ReplaceDialog1->Execute();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{

   Memo1 = new MyRichEdit(this);
   Memo1->Parent = this;
   Memo1->Height = 300;
   Memo1->Width = 300;
   Memo1->Left = 100;
   Memo1->Top = 100;
   Memo1->Visible = true;
   Memo1->Enabled = true;
   Memo1->Align = alClient;
   Memo1->PopupMenu = PopupMenu1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N35Click(TObject *Sender)
{
//вычисление и замена выражения результатом. используем готовый парсе, находящийся в файле parser.cpp
 AnsiString T, A;
 T = Memo1->SelText;
 if (T == "") return;
 parser ob; //ob - переменная с типом parser

 A =  ob.process_stage_main(T.c_str()); //Вывод результата
 Memo1->SelText = A;

}
//---------------------------------------------------------------------------

