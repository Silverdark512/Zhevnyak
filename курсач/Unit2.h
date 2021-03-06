//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <Menus.hpp>
#include <ActnList.hpp>
#include <CategoryButtons.hpp>
#include <ComCtrls.hpp>
#include <MPlayer.hpp>
#include <FileCtrl.hpp>
#include <Dialogs.hpp>
#include <ExtDlgs.hpp>
#include <DB.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TPersonalTrainer : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TButton *Button8;
	TLabel *Label1;
	TButton *BackButton;
	TButton *Button9;
	TButton *Button10;
	TButton *Button11;
	TMemo *Memo1;
	TButton *Button12;
	TButton *Button13;
	TButton *Button14;
	TButton *Button15;
	TButton *Button16;
	TButton *Button17;
	TButton *Button18;
	TButton *Button19;
	TButton *Button20;
	TButton *Button21;
	TButton *Button22;
	TButton *Button23;
	TButton *BackButton1;
	TButton *BackButton2;
	TButton *Button24;
	TButton *Button25;
	TButton *Button26;
	TButton *Button27;
	TButton *Button28;
	TButton *Button29;
	TButton *Button30;
	TButton *Button31;
	TEdit *Edit1;
	TButton *Button32;
	TLabel *Label2;
	TButton *Button33;
	TButton *Button34;
	TButton *Button35;
	TButton *Button36;
	TButton *Button37;
	TButton *Button38;
	TButton *Button39;
	TButton *BackButton3;
	TButton *Button40;
	TButton *Button41;
	TButton *Button42;
	TButton *Button43;
	TButton *Button44;
	TButton *Button45;
	TButton *Button46;
	TButton *Button47;
	TButton *Button48;
	TButton *Button49;
	TButton *BackButton4;
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall N9Click(TObject *Sender);
	void __fastcall BackButtonClick(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button11Click(TObject *Sender);
	void __fastcall Button12Click(TObject *Sender);
	void __fastcall Button13Click(TObject *Sender);
	void __fastcall Button14Click(TObject *Sender);
	void __fastcall Button15Click(TObject *Sender);
	void __fastcall Button16Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button17Click(TObject *Sender);
	void __fastcall Button18Click(TObject *Sender);
	void __fastcall Button19Click(TObject *Sender);
	void __fastcall BackButton1Click(TObject *Sender);
	void __fastcall Button20Click(TObject *Sender);
	void __fastcall Button23Click(TObject *Sender);
	void __fastcall Button21Click(TObject *Sender);
	void __fastcall Button22Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall BackButton2Click(TObject *Sender);
	void __fastcall Button24Click(TObject *Sender);
	void __fastcall Button25Click(TObject *Sender);
	void __fastcall Button26Click(TObject *Sender);
	void __fastcall Button27Click(TObject *Sender);
	void __fastcall Button28Click(TObject *Sender);
	void __fastcall Button29Click(TObject *Sender);
	void __fastcall Button30Click(TObject *Sender);
	void __fastcall Button31Click(TObject *Sender);
	void __fastcall Button32Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button33Click(TObject *Sender);
	void __fastcall BackButton3Click(TObject *Sender);
	void __fastcall Button34Click(TObject *Sender);
	void __fastcall Button35Click(TObject *Sender);
	void __fastcall Button36Click(TObject *Sender);
	void __fastcall Button37Click(TObject *Sender);
	void __fastcall Button38Click(TObject *Sender);
	void __fastcall Button39Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button40Click(TObject *Sender);
	void __fastcall BackButton4Click(TObject *Sender);
	void __fastcall Button41Click(TObject *Sender);
	void __fastcall Button42Click(TObject *Sender);
	void __fastcall Button43Click(TObject *Sender);
	void __fastcall Button44Click(TObject *Sender);
	void __fastcall Button45Click(TObject *Sender);
	void __fastcall Button46Click(TObject *Sender);
	void __fastcall Button47Click(TObject *Sender);
	void __fastcall Button48Click(TObject *Sender);
	void __fastcall Button49Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPersonalTrainer(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPersonalTrainer *PersonalTrainer;
//---------------------------------------------------------------------------
#endif
