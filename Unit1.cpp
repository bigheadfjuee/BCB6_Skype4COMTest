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

// Tony 2017/3/23 改寫
// SKype 版本 7.33.0.105 @ win10x64

// 來源 http://falldog7.blogspot.tw/2008/02/skype4com-in-bcb.html
// 這個程式是用來測試Skype4Com的一些功能
// (1) 要執行這個程式 首先要將$(BCB)/Imports/加入 Include Path
//    #include "SKYPE4COMLib_OCX.h"
// (2) 需要額外宣告變數：
//    TSkype * mSkype;

// 注意！
// 一、要下載和安裝 Skype fo Windows 版
// 才會有 C:\Program Files (x86)\Common Files\Skype\Skype4COM.dll
// 二、 用以下方法 產生 SKYPE4COMLib OCX 和 TLB 相關檔案
// 在 BCB6 IDE 的 Component > Import ActiveX Control  > Add (檔案類型改成 all type)
// Tony 註：若用拖拉的方式，使用這個 Skype 元件，BCB6 會卡住
// 三、要用管理者權限執行exe，才能存取此 SKYPE4COMLib

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

	// 設置處理Skype Event的function
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
	//開啟對話視窗
	chat->OpenWindow();
	//傳送訊息過去給falldog7_test
	chat->SendMessage( L"Hello");
	chat->Disband();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCallClick(TObject *Sender)
{
// Tony : 此方法已失效
//	ICallPtr call = mSkype->PlaceCall(L"+echo123",L"",L"",L"");

// Tony ：此方法也無效
// 參考：http://falldog7.blogspot.tw/2008/07/skype4com-in-bcb-call.html
/*
   WideString call_user_list = L"Call echo123"; // 用逗號 , 分開使用者名稱
   ICommandPtr cmd = mSkype->Command[1][ call_user_list.c_bstr() ][L""][true][5000];
   mSkype->SendCommand(cmd);
*/

// Tony : 可改用 Skype URI API
   
  AnsiString userName = ListBox1->Items->Strings[ListBox1->ItemIndex];
  AnsiString cmd = "skype:" + userName + "?call"; //&video=true";
  Shdocvw_tlb::TCppWebBrowser *cppWebBrowser;

  // 要 new 才會每次按都有作用
  cppWebBrowser = new Shdocvw_tlb::TCppWebBrowser(this);  
  cppWebBrowser->Navigate(WideString(cmd));
  delete cppWebBrowser;   
}
//---------------------------------------------------------------------------
// @target :
// 取出所有正在通話的 Call ，並將其所有的OutputDevice導至(1) Soundcard (2) File
void __fastcall TForm1::btnOutputFileClick(TObject *Sender)
{
  if(!mSkype) initSkype();
// Tony 實測=>無效
	wstring path = L"D:\\test.wav";
	ICallCollectionPtr call_list = mSkype->ActiveCalls;
	for( int i=1; i<=call_list->Count ; i++ ){
		call_list->get_Item(i)->set_OutputDevice( callIoDeviceTypeSoundcard, L"default" );
		call_list->get_Item(i)->set_OutputDevice( callIoDeviceTypeFile, const_cast<wchar_t*>(path.c_str()) );
//		this->Memo1->Lines->Add( "OutputDevice direct success!" );
	}
}
//---------------------------------------------------------------------------
// Skype4Com的Event
// 在Skype4Com.chm中定義的 Class : _SkypeEvents 裡面
//     HRESULT  CallStatus ([in] ICall *pCall,[in] TCallStatus Status) 
//     This event is caused by a change in call status. 
// 經由BCB處理過後的header檔，定義在 $(BCB)/Imports/SKYPE4COMLib_OCX.h 88行
//
// @TCallStatus 的定義在Skype4Com.chm 與 SKYPE4COMLib_TLB.h中都找得到
// @target : 當有人Call我時(Ringing) 就直接接起此通Call
void __fastcall TForm1::OnCallStatus( TObject *Sender, ICall* _call/*[in]*/, TCallStatus Status/*[in]*/)
{
	if( Status == clsRinging ){
		// ShowMessage("A Call is Rining");
    Memo1->Lines->Add("A Call is Rining");
		_call->Answer();
	}
}
//---------------------------------------------------------------------------
// Skype4Com的Event
// 在Skype4Com.chm中定義的 Class : _SkypeEvents 裡面
//    HRESULT  MessageStatus ([in] IChatMessage *pMessage,[in] TChatMessageStatus Status) 
//    This event is caused by a change in chat message status. 
// 經由BCB處理過後的header檔，定義在 $(BCB)/Imports/SKYPE4COMLib_OCX.h 93行
//
// @TChatMessageStatus 的定義在Skype4Com.chm 與 SKYPE4COMLib_TLB.h中都找得到
// @target : 當有人傳訊息給我時，就在Memo1上印出訊息
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

