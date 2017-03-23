// ************************************************************************ //
// WARNING                                                                    
// -------                                                                    
// The types declared in this file were generated from data read from a       
// Type Library. If this type library is explicitly or indirectly (via        
// another type library referring to this type library) re-imported, or the   
// 'Refresh' command of the Type Library Editor activated while editing the   
// Type Library, the contents of this file will be regenerated and all        
// manual modifications will be lost.                                         
// ************************************************************************ //

// C++ TLBWRTR : $Revision:   1.151.1.0.1.27  $
// File generated on 2017/3/23 ¤U¤È 02:02:29 from Type Library described below.

// ************************************************************************  //
// Type Lib: C:\Users\tony\Downloads\Skype4COM\Skype4COM.dll (1)
// LIBID: {03282B5D-B38F-469D-849A-09B0A7F4881B}
// LCID: 0
// Helpfile: C:\Program Files (x86)\Common Files\Skype\Skype4COM.chm
// HelpString: Skype4COM 1.0 Type Library.
// DepndLst: 
//   (1) v2.0 stdole, (C:\Windows\SysWOW64\stdole2.tlb)
// Errors:
//   Hint: Symbol 'Application' renamed to 'App'
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#include <olectrls.hpp>
#if defined(USING_ATL)
#include <atl\atlvcl.h>
#endif

#include "SKYPE4COMLib_OCX.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Skype4comlib_tlb
{



// *********************************************************************//
// OCX PROXY CLASS IMPLEMENTATION
// (The following variables/methods implement the class TSkype which
// allows "Skype class." to be hosted in CBuilder IDE/apps).
// *********************************************************************//
int   TSkype::EventDispIDs[44] = {
    0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006,
    0x00000007, 0x00000008, 0x00000009, 0x0000000A, 0x0000000B, 0x0000000C,
    0x0000000D, 0x0000000E, 0x0000000F, 0x00000010, 0x00000011, 0x00000012,
    0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017, 0x00000018,
    0x00000019, 0x0000001A, 0x0000001B, 0x0000001C, 0x0000001D, 0x0000001E,
    0x0000001F, 0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024,
    0x00000025, 0x00000026, 0x00000027, 0x00000028, 0x00000029, 0x0000002A,
    0x0000002B, 0x0000002C};

TControlData TSkype::CControlData =
{
  // GUID of CoClass and Event Interface of Control
  {0x830690FC, 0xBF2F, 0x47A6,{ 0xAC, 0x2D, 0x33,0x0B, 0xCB, 0x40,0x26, 0x64} }, // CoClass
  {0xF4F90CDD, 0xC620, 0x4118,{ 0x94, 0x5E, 0xCA,0xA1, 0xBB, 0xEB,0xA4, 0x35} }, // Events

  // Count of Events and array of their DISPIDs
  44, &EventDispIDs,

  // Pointer to Runtime License string
  NULL,  // HRESULT(0x80004002)

  // Flags for OnChanged PropertyNotification
  0x00000000,
  300,// (IDE Version)

  // Count of Font Prop and array of their DISPIDs
  0, NULL,

  // Count of Pict Prop and array of their DISPIDs
  0, NULL,
  0, // Reserved
  0, // Instance count (used internally)
  0, // List of Enum descriptions (internal)
};

GUID     TSkype::DEF_CTL_INTF = {0xB1878BFE, 0x53D3, 0x402E,{ 0x8C, 0x86, 0x19,0x0B, 0x19, 0xAF,0x70, 0xD5} };
TNoParam TSkype::OptParam;

static inline void ValidCtrCheck(TSkype *)
{
   delete new TSkype((TComponent*)(0));
};

void __fastcall TSkype::InitControlData()
{
  ControlData = &CControlData;
};

void __fastcall TSkype::CreateControl()
{
  if (!m_OCXIntf)
  {
    _ASSERTE(DefaultDispatch);
    DefaultDispatch->QueryInterface(DEF_CTL_INTF, (LPVOID*)&m_OCXIntf);
  }
};

TCOMISkype __fastcall TSkype::GetDefaultInterface()
{
  CreateControl();
  return m_OCXIntf;
};

Skype4comlib_tlb::IUserCollectionPtr __fastcall TSkype::SearchForUsers(BSTR Target/*[in]*/)
{
  return GetDefaultInterface()->SearchForUsers(Target/*[in]*/);
}

void __fastcall TSkype::Attach(long Protocol/*[in,def,opt]*/, VARIANT_BOOL Wait/*[in,def,opt]*/)
{
  GetDefaultInterface()->Attach(Protocol/*[in,def,opt]*/, Wait/*[in,def,opt]*/);
}

Skype4comlib_tlb::ICallPtr __fastcall TSkype::PlaceCall(BSTR Target/*[in]*/, 
                                                        BSTR Target2/*[in,def,opt]*/, 
                                                        BSTR Target3/*[in,def,opt]*/, 
                                                        BSTR Target4/*[in,def,opt]*/)
{
  return GetDefaultInterface()->PlaceCall(Target/*[in]*/, Target2/*[in,def,opt]*/, 
                                          Target3/*[in,def,opt]*/, Target4/*[in,def,opt]*/);
}

Skype4comlib_tlb::IChatMessagePtr __fastcall TSkype::SendMessage(BSTR Username/*[in]*/, 
                                                                 BSTR Text/*[in]*/)
{
  return GetDefaultInterface()->SendMessage(Username/*[in]*/, Text/*[in]*/);
}

void __fastcall TSkype::SendCommand(Skype4comlib_tlb::ICommand* pCommand/*[in]*/)
{
  GetDefaultInterface()->SendCommand(pCommand/*[in]*/);
}

void __fastcall TSkype::ChangeUserStatus(Skype4comlib_tlb::TUserStatus newVal/*[in]*/)
{
  GetDefaultInterface()->ChangeUserStatus(newVal/*[in]*/);
}

Skype4comlib_tlb::IChatPtr __fastcall TSkype::CreateChatWith(BSTR Username/*[in]*/)
{
  return GetDefaultInterface()->CreateChatWith(Username/*[in]*/);
}

Skype4comlib_tlb::IChatPtr __fastcall TSkype::CreateChatMultiple(Skype4comlib_tlb::IUserCollection* pMembers/*[in]*/)
{
  return GetDefaultInterface()->CreateChatMultiple(pMembers/*[in]*/);
}

Skype4comlib_tlb::IVoicemailPtr __fastcall TSkype::SendVoicemail(BSTR Username/*[in]*/)
{
  return GetDefaultInterface()->SendVoicemail(Username/*[in]*/);
}

void __fastcall TSkype::ClearChatHistory(void)
{
  GetDefaultInterface()->ClearChatHistory();
}

void __fastcall TSkype::ClearVoicemailHistory(void)
{
  GetDefaultInterface()->ClearVoicemailHistory();
}

void __fastcall TSkype::ClearCallHistory(BSTR Username/*[in,def,opt]*/, 
                                         Skype4comlib_tlb::TCallHistory Type/*[in,def,opt]*/)
{
  GetDefaultInterface()->ClearCallHistory(Username/*[in,def,opt]*/, Type/*[in,def,opt]*/);
}

void __fastcall TSkype::ResetCache(void)
{
  GetDefaultInterface()->ResetCache();
}

Skype4comlib_tlb::IGroupPtr __fastcall TSkype::CreateGroup(BSTR GroupName/*[in]*/)
{
  return GetDefaultInterface()->CreateGroup(GroupName/*[in]*/);
}

void __fastcall TSkype::DeleteGroup(long GroupId/*[in]*/)
{
  GetDefaultInterface()->DeleteGroup(GroupId/*[in]*/);
}

void __fastcall TSkype::EnableApiSecurityContext(Skype4comlib_tlb::TApiSecurityContext Context/*[in]*/)
{
  GetDefaultInterface()->EnableApiSecurityContext(Context/*[in]*/);
}

Skype4comlib_tlb::ISmsMessagePtr __fastcall TSkype::CreateSms(Skype4comlib_tlb::TSmsMessageType MessageType/*[in]*/, 
                                                              BSTR TargetNumbers/*[in]*/)
{
  return GetDefaultInterface()->CreateSms(MessageType/*[in]*/, TargetNumbers/*[in]*/);
}

Skype4comlib_tlb::ISmsMessagePtr __fastcall TSkype::SendSms(BSTR TargetNumbers/*[in]*/, 
                                                            BSTR MessageText/*[in]*/, 
                                                            BSTR ReplyToNumber/*[in,def,opt]*/)
{
  return GetDefaultInterface()->SendSms(TargetNumbers/*[in]*/, MessageText/*[in]*/, 
                                        ReplyToNumber/*[in,def,opt]*/);
}

long __fastcall TSkype::AsyncSearchUsers(BSTR Target/*[in]*/)
{
  return GetDefaultInterface()->AsyncSearchUsers(Target/*[in]*/);
}

Skype4comlib_tlb::IChatPtr __fastcall TSkype::FindChatUsingBlob(BSTR Blob/*[in]*/)
{
  return GetDefaultInterface()->FindChatUsingBlob(Blob/*[in]*/);
}

Skype4comlib_tlb::IChatPtr __fastcall TSkype::CreateChatUsingBlob(BSTR Blob/*[in]*/)
{
  return GetDefaultInterface()->CreateChatUsingBlob(Blob/*[in]*/);
}

BSTR __fastcall TSkype::get_Property(BSTR ObjectType/*[in]*/, BSTR ObjectId/*[in]*/, 
                                     BSTR PropName/*[in]*/)
{
  return GetDefaultInterface()->get_Property(ObjectType/*[in]*/, ObjectId/*[in]*/, PropName/*[in]*/);
}

void __fastcall TSkype::set_Property(BSTR ObjectType/*[in]*/, BSTR ObjectId/*[in]*/, 
                                     BSTR PropName/*[in]*/, BSTR pVal/*[in]*/)
{
  GetDefaultInterface()->set_Property(ObjectType/*[in]*/, ObjectId/*[in]*/, PropName/*[in]*/, 
                                      pVal/*[in]*/);
}

BSTR __fastcall TSkype::get_Variable(BSTR Name/*[in]*/)
{
  return GetDefaultInterface()->get_Variable(Name/*[in]*/);
}

void __fastcall TSkype::set_Variable(BSTR Name/*[in]*/, BSTR pVal/*[in]*/)
{
  GetDefaultInterface()->set_Variable(Name/*[in]*/, pVal/*[in]*/);
}

TOLEBOOL __fastcall TSkype::get_Privilege(BSTR Name/*[in]*/)
{
  return GetDefaultInterface()->get_Privilege(Name/*[in]*/);
}

Skype4comlib_tlb::IUserPtr __fastcall TSkype::get_CurrentUser(void)
{
  return GetDefaultInterface()->get_CurrentUser();
}

Skype4comlib_tlb::IConversionPtr __fastcall TSkype::get_Convert(void)
{
  return GetDefaultInterface()->get_Convert();
}

Skype4comlib_tlb::IUserCollectionPtr __fastcall TSkype::get_Friends(void)
{
  return GetDefaultInterface()->get_Friends();
}

Skype4comlib_tlb::ICallCollectionPtr __fastcall TSkype::get_Calls(BSTR Target/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Calls(Target/*[in,def,opt]*/);
}

Skype4comlib_tlb::ICallCollectionPtr __fastcall TSkype::get_ActiveCalls(void)
{
  return GetDefaultInterface()->get_ActiveCalls();
}

Skype4comlib_tlb::ICallCollectionPtr __fastcall TSkype::get_MissedCalls(void)
{
  return GetDefaultInterface()->get_MissedCalls();
}

Skype4comlib_tlb::IChatMessageCollectionPtr __fastcall TSkype::get_Messages(BSTR Target/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Messages(Target/*[in,def,opt]*/);
}

Skype4comlib_tlb::IChatMessageCollectionPtr __fastcall TSkype::get_MissedMessages(void)
{
  return GetDefaultInterface()->get_MissedMessages();
}

Skype4comlib_tlb::IUserPtr __fastcall TSkype::get_User(BSTR Username/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_User(Username/*[in,def,opt]*/);
}

Skype4comlib_tlb::IChatMessagePtr __fastcall TSkype::get_Message(long Id/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Message(Id/*[in,def,opt]*/);
}

Skype4comlib_tlb::ICallPtr __fastcall TSkype::get_Call(long Id/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Call(Id/*[in,def,opt]*/);
}

Skype4comlib_tlb::IChatCollectionPtr __fastcall TSkype::get_Chats(void)
{
  return GetDefaultInterface()->get_Chats();
}

Skype4comlib_tlb::IChatPtr __fastcall TSkype::get_Chat(BSTR Name/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Chat(Name/*[in,def,opt]*/);
}

Skype4comlib_tlb::IConferencePtr __fastcall TSkype::get_Conference(long Id/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Conference(Id/*[in,def,opt]*/);
}

Skype4comlib_tlb::IConferenceCollectionPtr __fastcall TSkype::get_Conferences(void)
{
  return GetDefaultInterface()->get_Conferences();
}

BSTR __fastcall TSkype::get_Profile(BSTR Property/*[in]*/)
{
  return GetDefaultInterface()->get_Profile(Property/*[in]*/);
}

void __fastcall TSkype::set_Profile(BSTR Property/*[in]*/, BSTR pVal/*[in]*/)
{
  GetDefaultInterface()->set_Profile(Property/*[in]*/, pVal/*[in]*/);
}

Skype4comlib_tlb::IChatCollectionPtr __fastcall TSkype::get_ActiveChats(void)
{
  return GetDefaultInterface()->get_ActiveChats();
}

Skype4comlib_tlb::IChatCollectionPtr __fastcall TSkype::get_MissedChats(void)
{
  return GetDefaultInterface()->get_MissedChats();
}

Skype4comlib_tlb::IChatCollectionPtr __fastcall TSkype::get_RecentChats(void)
{
  return GetDefaultInterface()->get_RecentChats();
}

Skype4comlib_tlb::IChatCollectionPtr __fastcall TSkype::get_BookmarkedChats(void)
{
  return GetDefaultInterface()->get_BookmarkedChats();
}

Skype4comlib_tlb::IVoicemailCollectionPtr __fastcall TSkype::get_Voicemails(void)
{
  return GetDefaultInterface()->get_Voicemails();
}

Skype4comlib_tlb::IUserCollectionPtr __fastcall TSkype::get_UsersWaitingAuthorization(void)
{
  return GetDefaultInterface()->get_UsersWaitingAuthorization();
}

Skype4comlib_tlb::IApplicationPtr __fastcall TSkype::get_Application(BSTR Name/*[in]*/)
{
  return GetDefaultInterface()->get_Application(Name/*[in]*/);
}

Skype4comlib_tlb::IVoicemailPtr __fastcall TSkype::get_Greeting(BSTR Username/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Greeting(Username/*[in,def,opt]*/);
}

Skype4comlib_tlb::IProfilePtr __fastcall TSkype::get_CurrentUserProfile(void)
{
  return GetDefaultInterface()->get_CurrentUserProfile();
}

Skype4comlib_tlb::IGroupCollectionPtr __fastcall TSkype::get_Groups(void)
{
  return GetDefaultInterface()->get_Groups();
}

Skype4comlib_tlb::IGroupCollectionPtr __fastcall TSkype::get_CustomGroups(void)
{
  return GetDefaultInterface()->get_CustomGroups();
}

Skype4comlib_tlb::IGroupCollectionPtr __fastcall TSkype::get_HardwiredGroups(void)
{
  return GetDefaultInterface()->get_HardwiredGroups();
}

Skype4comlib_tlb::ISettingsPtr __fastcall TSkype::get_Settings(void)
{
  return GetDefaultInterface()->get_Settings();
}

Skype4comlib_tlb::IClientPtr __fastcall TSkype::get_Client(void)
{
  return GetDefaultInterface()->get_Client();
}

Skype4comlib_tlb::ICommandPtr __fastcall TSkype::get_Command(long Id/*[in]*/, BSTR Command/*[in]*/, 
                                                             BSTR Reply/*[in,def,opt]*/, 
                                                             VARIANT_BOOL Block/*[in,def,opt]*/, 
                                                             long Timeout/*[in,def,opt]*/)
{
  return GetDefaultInterface()->get_Command(Id/*[in]*/, Command/*[in]*/, Reply/*[in,def,opt]*/, 
                                            Block/*[in,def,opt]*/, Timeout/*[in,def,opt]*/);
}

Skype4comlib_tlb::IVoicemailPtr __fastcall TSkype::get_Voicemail(long Id/*[in]*/)
{
  return GetDefaultInterface()->get_Voicemail(Id/*[in]*/);
}

Skype4comlib_tlb::IVoicemailCollectionPtr __fastcall TSkype::get_MissedVoicemails(void)
{
  return GetDefaultInterface()->get_MissedVoicemails();
}

TOLEBOOL __fastcall TSkype::get_ApiSecurityContextEnabled(Skype4comlib_tlb::TApiSecurityContext Context/*[in]*/)
{
  return GetDefaultInterface()->get_ApiSecurityContextEnabled(Context/*[in]*/);
}

Skype4comlib_tlb::ISmsMessageCollectionPtr __fastcall TSkype::get_Smss(void)
{
  return GetDefaultInterface()->get_Smss();
}

Skype4comlib_tlb::ISmsMessageCollectionPtr __fastcall TSkype::get_MissedSmss(void)
{
  return GetDefaultInterface()->get_MissedSmss();
}

Skype4comlib_tlb::IFileTransferCollectionPtr __fastcall TSkype::get_FileTransfers(void)
{
  return GetDefaultInterface()->get_FileTransfers();
}

Skype4comlib_tlb::IFileTransferCollectionPtr __fastcall TSkype::get_ActiveFileTransfers(void)
{
  return GetDefaultInterface()->get_ActiveFileTransfers();
}

Skype4comlib_tlb::IUserCollectionPtr __fastcall TSkype::get_FocusedContacts(void)
{
  return GetDefaultInterface()->get_FocusedContacts();
}


};     // namespace Skype4comlib_tlb


// *********************************************************************//
// The Register function is invoked by the IDE when this module is 
// installed in a Package. It provides the list of Components (including
// OCXes) implemented by this module. The following implementation
// informs the IDE of the OCX proxy classes implemented here.
// *********************************************************************//
namespace Skype4comlib_ocx
{

void __fastcall PACKAGE Register()
{
  // [1]
  TComponentClass cls_ocx[] = {
                              __classid(Skype4comlib_tlb::TSkype)
                           };
  RegisterComponents("ActiveX", cls_ocx,
                     sizeof(cls_ocx)/sizeof(cls_ocx[0])-1);
}

};     // namespace Skype4comlib_ocx
