//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TToolBar *ToolBar1;
        TToolButton *ToolButton1;
        TToolButton *ToolButton2;
        TToolButton *ToolButton3;
        TToolButton *ToolButton4;
        TToolButton *ToolButton5;
        TToolButton *ToolButton6;
        TToolButton *ToolButton7;
        TToolButton *ToolButton8;
        TToolButton *ToolButton9;
        TToolButton *ToolButton10;
        TToolButton *ToolButton11;
        TToolButton *ToolButton12;
        TToolButton *ToolButton13;
        TToolButton *ToolButton14;
        TToolButton *ToolButton15;
        TToolButton *ToolButton16;
        TToolButton *ToolButton17;
        TToolButton *ToolButton18;
        TImageList *ImageList1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N6;
        TMenuItem *N7;
        TMenuItem *N8;
        TMenuItem *N9;
        TMenuItem *N10;
        TMenuItem *N11;
        TMenuItem *N12;
        TMenuItem *N13;
        TMenuItem *N14;
        TMenuItem *N15;
        TMenuItem *N16;
        TMenuItem *N17;
        TMenuItem *N18;
        TMenuItem *N19;
        TMenuItem *N20;
        TMenuItem *N21;
        TMenuItem *N22;
        TMenuItem *N23;
        TMenuItem *N24;
        TMenuItem *N25;
        TMenuItem *N26;
        TMenuItem *N27;
        TMenuItem *N28;
        TMenuItem *N29;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TFontDialog *FontDialog1;
        TPrintDialog *PrintDialog1;
        TFindDialog *FindDialog1;
        TMenuItem *N31;
        TMenuItem *N32;
        TMenuItem *N5;
        TMenuItem *N33;
        TMenuItem *F1;
        TMenuItem *F2;
        TMenuItem *F3;
        TMenuItem *F4;
        TReplaceDialog *ReplaceDialog1;
        TMenuItem *N34;
        TPopupMenu *PopupMenu1;
        TMenuItem *N35;
        TMenuItem *n30;
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall ToolButton2Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall N32Click(TObject *Sender);
        void __fastcall N7Click(TObject *Sender);
        void __fastcall ToolButton4Click(TObject *Sender);
        void __fastcall N9Click(TObject *Sender);
        void __fastcall ToolButton6Click(TObject *Sender);
        void __fastcall N10Click(TObject *Sender);
        void __fastcall ToolButton7Click(TObject *Sender);
        void __fastcall N11Click(TObject *Sender);
        void __fastcall ToolButton8Click(TObject *Sender);
        void __fastcall N12Click(TObject *Sender);
        void __fastcall N13Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N15Click(TObject *Sender);
        void __fastcall N17Click(TObject *Sender);
        void __fastcall N19Click(TObject *Sender);
        void __fastcall ToolButton16Click(TObject *Sender);
        void __fastcall N20Click(TObject *Sender);
        void __fastcall ToolButton18Click(TObject *Sender);
        void __fastcall N21Click(TObject *Sender);
        void __fastcall ToolButton17Click(TObject *Sender);
        void __fastcall N23Click(TObject *Sender);
        void __fastcall ToolButton12Click(TObject *Sender);
        void __fastcall N24Click(TObject *Sender);
        void __fastcall ToolButton13Click(TObject *Sender);
        void __fastcall N25Click(TObject *Sender);
        void __fastcall ToolButton14Click(TObject *Sender);
        void __fastcall ToolButton10Click(TObject *Sender);
        void __fastcall N26Click(TObject *Sender);
        void __fastcall N28Click(TObject *Sender);
        void __fastcall N30Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall F4Click(TObject *Sender);
        void __fastcall N34Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall N35Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
