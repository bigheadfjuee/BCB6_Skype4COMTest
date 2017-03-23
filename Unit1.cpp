#include <vcl.h>
#include <iostream>
#pragma hdrstop

#include "Unit1.h"
#include <OleCtrls.hpp>
#include "SHDocVw_OCX.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "SKYPE4COMLib_OCX"
#pragma link "SHDocVw_OCX" //Shdocvw_tlb::TCppWebBrowser
#pragma resource "*.dfm"
TForm1 *Form1;
using namespace std;

// Tony 2017/3/23 ��g
// SKype ���� 7.33.0.105 @ win10x64

// �ӷ� http://falldog7.blogspot.tw/2008/02/skype4com-in-bcb.html
// �o�ӵ{���O�ΨӴ���Skype4Com���@�ǥ\��
// (1) �n����o�ӵ{�� �����n�N$(BCB)/Imports/�[�J Include Path
//    #include "SKYPE4COMLib_OCX.h"
// (2) �ݭn�B�~�ŧi�ܼơG
//    TSkype * mSkype;

// �`�N�I
// �@�B�n�U���M�w�� Skype fo Windows ��
// �~�|�� C:\Program Files (x86)\Common Files\Skype\Skype4COM.dll
// �G�B �ΥH�U��k ���� SKYPE4COMLib OCX �M TLB �����ɮ�
// �b BCB6 IDE �� Component > Import ActiveX Control  > Add (�ɮ������令 all type)
// Tony ���G�Y�Ω�Ԫ��覡�A�ϥγo�� Skype ����ABCB6 �|�d��
// �T�B�n�κ޲z���v������exe�A�~��s���� SKYPE4COMLib

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
: TForm(Owner)
{
//  initSkype();
}
//---------------------------------------------------------------------------
void TForm1::initSkype()
{
	mSkype = new TSkype(Owner);
	mSkype->Attach(5,false);
	
	// test if Skype is running, if not, start it;
	if( !mSkype->Client->IsRunning )
	mSkype->Client->Start(false,false);
	// 1st parameter - start Skype in minimized state
	// 2nd parameter - show splash screen
	
	// Get the count of Friends
	int count = mSkype->Friends->get_Count();

	// Add Friend list to Memo
	for( int i=1 ; i<count ; i++ )// start index from 1 !!!
	this->ListBox1->Items->Add( mSkype->Friends->get_Item(i)->get_Handle() );

	// �]�m�B�zSkype Event��function
	mSkype->OnCallStatus = OnCallStatus;
	mSkype->OnMessageStatus = OnMessageStatus;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnChatClick(TObject *Sender)
{
  if(!mSkype) initSkype();

	IChatPtr chat;
  AnsiString userName = ListBox1->Items->Strings[ListBox1->ItemIndex];
	chat = mSkype->CreateChatWith( WideString(userName));
	//�}�ҹ�ܵ���
	chat->OpenWindow();
	//�ǰe�T���L�h��falldog7_test
	chat->SendMessage( L"Hello");
	chat->Disband();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCallClick(TObject *Sender)
{
// Tony : ����k�w����
//	ICallPtr call = mSkype->PlaceCall(L"+echo123",L"",L"",L"");

// Tony �G����k�]�L��
// �ѦҡGhttp://falldog7.blogspot.tw/2008/07/skype4com-in-bcb-call.html
/*
   WideString call_user_list = L"Call echo123"; // �γr�� , ���}�ϥΪ̦W��
   ICommandPtr cmd = mSkype->Command[1][ call_user_list.c_bstr() ][L""][true][5000];
   mSkype->SendCommand(cmd);
*/

// Tony : �i��� Skype URI API
   
  AnsiString userName = ListBox1->Items->Strings[ListBox1->ItemIndex];
  AnsiString cmd = "skype:" + userName + "?call"; //&video=true";
  Shdocvw_tlb::TCppWebBrowser *cppWebBrowser;

  // �n new �~�|�C���������@��
  cppWebBrowser = new Shdocvw_tlb::TCppWebBrowser(this);  
  cppWebBrowser->Navigate(WideString(cmd));
  delete cppWebBrowser;   
}
//---------------------------------------------------------------------------
// @target :
// ���X�Ҧ����b�q�ܪ� Call �A�ñN��Ҧ���OutputDevice�ɦ�(1) Soundcard (2) File
void __fastcall TForm1::btnOutputFileClick(TObject *Sender)
{
  if(!mSkype) initSkype();
// Tony ���=>�L��
	wstring path = L"D:\\test.wav";
	ICallCollectionPtr call_list = mSkype->ActiveCalls;
	for( int i=1; i<=call_list->Count ; i++ ){
		call_list->get_Item(i)->set_OutputDevice( callIoDeviceTypeSoundcard, L"default" );
		call_list->get_Item(i)->set_OutputDevice( callIoDeviceTypeFile, const_cast<wchar_t*>(path.c_str()) );
//		this->Memo1->Lines->Add( "OutputDevice direct success!" );
	}
}
//---------------------------------------------------------------------------
// Skype4Com��Event
// �bSkype4Com.chm���w�q�� Class : _SkypeEvents �̭�
//     HRESULT  CallStatus ([in] ICall *pCall,[in] TCallStatus Status) 
//     This event is caused by a change in call status. 
// �g��BCB�B�z�L�᪺header�ɡA�w�q�b $(BCB)/Imports/SKYPE4COMLib_OCX.h 88��
//
// @TCallStatus ���w�q�bSkype4Com.chm �P SKYPE4COMLib_TLB.h������o��
// @target : ���HCall�ڮ�(Ringing) �N�������_���qCall
void __fastcall TForm1::OnCallStatus( TObject *Sender, ICall* _call/*[in]*/, TCallStatus Status/*[in]*/)
{
	if( Status == clsRinging ){
		// ShowMessage("A Call is Rining");
    Memo1->Lines->Add("A Call is Rining");
		_call->Answer();
	}
}
//---------------------------------------------------------------------------
// Skype4Com��Event
// �bSkype4Com.chm���w�q�� Class : _SkypeEvents �̭�
//    HRESULT  MessageStatus ([in] IChatMessage *pMessage,[in] TChatMessageStatus Status) 
//    This event is caused by a change in chat message status. 
// �g��BCB�B�z�L�᪺header�ɡA�w�q�b $(BCB)/Imports/SKYPE4COMLib_OCX.h 93��
//
// @TChatMessageStatus ���w�q�bSkype4Com.chm �P SKYPE4COMLib_TLB.h������o��
// @target : ���H�ǰT�����ڮɡA�N�bMemo1�W�L�X�T��
void __fastcall TForm1::OnMessageStatus( TObject *Sender, IChatMessage* pMessage/*[in]*/, TChatMessageStatus Status/*[in]*/)
{
	this->Memo1->Lines->Add( AnsiString("From : ")+ pMessage->FromHandle );

	if( Status == cmsReceived ){
		this->Memo1->Lines->Add( AnsiString("Msg : ")+ pMessage->Body );
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnInitSkypeClick(TObject *Sender)
{
    if(!mSkype) initSkype();  
}
//---------------------------------------------------------------------------

