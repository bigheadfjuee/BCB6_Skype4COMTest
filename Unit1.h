//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "SKYPE4COMLib_OCX.h"
#include <OleCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TListBox *ListBox1;
	TButton *btnChat;
	TButton *btnCall;
	TButton *btnOutputFile;
	TMemo *Memo1;
	TButton *btnInitSkype;
	void __fastcall btnChatClick(TObject *Sender);
	void __fastcall btnCallClick(TObject *Sender);
	void __fastcall btnOutputFileClick(TObject *Sender);
	void __fastcall btnInitSkypeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	ICall* call;
	long call_id;
	__fastcall TForm1(TComponent* Owner);
	TSkype * mSkype;
	void __fastcall OnCallStatus( TObject *Sender, ICall* pCall/*[in]*/, TCallStatus Status/*[in]*/);
	void __fastcall TForm1::OnMessageStatus( TObject *Sender, IChatMessage* pMessage, TChatMessageStatus Status);
	void initSkype();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
