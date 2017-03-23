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
// File generated on 2017/3/23 �U�� 02:02:29 from Type Library described below.

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

#include "SKYPE4COMLib_TLB.h"

#if !defined(__PRAGMA_PACKAGE_SMART_INIT)
#define      __PRAGMA_PACKAGE_SMART_INIT
#pragma package(smart_init)
#endif

namespace Skype4comlib_tlb
{


// *********************************************************************//
// GUIDS declared in the TypeLibrary                                      
// *********************************************************************//
const GUID LIBID_SKYPE4COMLib = {0x03282B5D, 0xB38F, 0x469D,{ 0x84, 0x9A, 0x09,0xB0, 0xA7, 0xF4,0x88, 0x1B} };
const GUID IID_IApplication = {0xF9ADA565, 0x2FAD, 0x424D,{ 0x87, 0x8C, 0x7A,0xD1, 0x2D, 0xF9,0xE6, 0x17} };
const GUID IID_IApplicationStreamCollection = {0xD8F1BCC4, 0x2A73, 0x47B9,{ 0x83, 0xB3, 0xD4,0xD2, 0x99, 0xCA,0x5B, 0xC6} };
const GUID IID_IApplicationStream = {0xE072F615, 0xF833, 0x4BCA,{ 0xB4, 0x73, 0xCE,0xE4, 0x4D, 0x30,0x20, 0x30} };
const GUID IID_IUserCollection = {0xEC163200, 0x44EB, 0x483B,{ 0x90, 0x7F, 0xA8,0xC1, 0xCF, 0x56,0xB8, 0xEE} };
const GUID IID_IUser = {0xD0BC5168, 0xA518, 0x4192,{ 0x9D, 0x20, 0x0B,0x90, 0x7B, 0x23,0xC4, 0xD1} };
const GUID IID_ICall = {0x76036886, 0x436C, 0x405F,{ 0xA9, 0x6E, 0x78,0x35, 0xCC, 0xFB,0x82, 0xF3} };
const GUID IID_IParticipantCollection = {0xF825FE12, 0x9826, 0x4BD2,{ 0xBF, 0x7E, 0x1E,0xD9, 0x5B, 0x84,0x80, 0xFE} };
const GUID IID_IParticipant = {0xF1B2AD09, 0x1961, 0x4336,{ 0xA6, 0xBF, 0x93,0x01, 0x0B, 0x73,0xDE, 0x72} };
const GUID IID_ICallChannel = {0xB76C04C9, 0x0EB1, 0x4748,{ 0xB0, 0xC0, 0xD0,0x1D, 0xEB, 0x59,0x59, 0x06} };
const GUID IID_ICallChannelManager = {0x30C27C77, 0x525F, 0x4A3F,{ 0xB9, 0xDD, 0xC5,0xA7, 0x7C, 0x67,0x25, 0x0D} };
const GUID IID_ISkype = {0xB1878BFE, 0x53D3, 0x402E,{ 0x8C, 0x86, 0x19,0x0B, 0x19, 0xAF,0x70, 0xD5} };
const GUID IID_IConversion = {0x8D82F88A, 0xB307, 0x4074,{ 0x8E, 0xD5, 0x11,0xC3, 0xBD, 0x21,0x34, 0x52} };
const GUID IID_ICallCollection = {0x72E1EC13, 0x0DF9, 0x48AE,{ 0x8A, 0x31, 0xE2,0x90, 0x0D, 0x85,0xBA, 0x55} };
const GUID IID_IChatMessageCollection = {0x9511117A, 0x7BCA, 0x4669,{ 0xBE, 0x96, 0x6E,0xA6, 0x86, 0x69,0x75, 0xC1} };
const GUID IID_IChatMessage = {0x4CFF5C70, 0x3C95, 0x4566,{ 0x82, 0x4A, 0xFA,0x16, 0x45, 0x86,0xD5, 0x35} };
const GUID IID_IChat = {0x8C24106C, 0x3368, 0x4580,{ 0x93, 0xE5, 0x5E,0xD4, 0xAC, 0xCD,0xE3, 0x06} };
const GUID IID_IChatMemberCollection = {0x8FFC686B, 0x2E5E, 0x4763,{ 0x8B, 0x03, 0xFF,0x4F, 0xD3, 0xA0,0xC4, 0xDA} };
const GUID IID_IChatMember = {0x9E9F0473, 0x94C2, 0x4FDD,{ 0x85, 0xD2, 0x43,0xE3, 0x47, 0x87,0x65, 0xF9} };
const GUID IID_ICommand = {0x48E046A8, 0x31D7, 0x4E5F,{ 0xA6, 0x11, 0x47,0xBF, 0x32, 0xB8,0x64, 0x05} };
const GUID IID_IChatCollection = {0x052A4165, 0x010A, 0x457D,{ 0xA8, 0x74, 0xE6,0x61, 0xB6, 0x32,0x28, 0x46} };
const GUID IID_IConference = {0xAEB48497, 0x5090, 0x479C,{ 0x8B, 0xE0, 0xBD,0x51, 0x59, 0x71,0x56, 0xA1} };
const GUID IID_IConferenceCollection = {0xF3E0C529, 0x7D4F, 0x4AF5,{ 0xB5, 0x01, 0x27,0xD2, 0x5D, 0x4D,0x28, 0x25} };
const GUID IID_IVoicemailCollection = {0x21494848, 0xBBD5, 0x4192,{ 0xBE, 0x32, 0x57,0xD1, 0xA1, 0x9D,0x8E, 0x94} };
const GUID IID_IVoicemail = {0x120B425E, 0x6313, 0x4924,{ 0xB5, 0xA9, 0x3E,0x9F, 0x2E, 0x44,0x4A, 0x00} };
const GUID IID_IProfile = {0xB9A3D72F, 0x04C1, 0x4878,{ 0x99, 0x3C, 0xD8,0x9F, 0x83, 0xE2,0x05, 0x69} };
const GUID IID_IGroupCollection = {0x4C5C99DC, 0x09CF, 0x4A9C,{ 0xBD, 0x94, 0x8D,0x65, 0x54, 0x54,0xA1, 0xF4} };
const GUID IID_IGroup = {0x84513274, 0x9C49, 0x4AAA,{ 0xB8, 0xFC, 0x31,0x6E, 0xB3, 0x2C,0xFE, 0x95} };
const GUID IID_ISettings = {0x2BC8C53B, 0x3312, 0x4A77,{ 0xAC, 0x87, 0x31,0xDF, 0x18, 0xA1,0xEC, 0x51} };
const GUID IID_IClient = {0x838731B0, 0x88E7, 0x4BED,{ 0x81, 0xDC, 0xB3,0x5C, 0xA8, 0x43,0x33, 0x41} };
const GUID IID_IPluginEvent = {0x4DF5F83A, 0x0ABA, 0x417D,{ 0xA6, 0xFC, 0x62,0xA6, 0x8A, 0xE0,0x6E, 0xF7} };
const GUID IID_IPluginMenuItem = {0xC4BDF667, 0x3FF7, 0x4B44,{ 0xA9, 0xF4, 0xF3,0x93, 0x7E, 0x3E,0x6D, 0x86} };
const GUID IID_ISmsMessage = {0x82D97F2A, 0x0E17, 0x40F3,{ 0x8E, 0x01, 0x24,0x93, 0x7F, 0x93,0x6F, 0xF4} };
const GUID IID_ISmsTargetCollection = {0xA2365EF3, 0x4805, 0x4DD3,{ 0xA9, 0xD4, 0x1A,0x8A, 0xE3, 0xE1,0x7D, 0x84} };
const GUID IID_ISmsTarget = {0xA9B9C33A, 0x49A6, 0x41D5,{ 0xB1, 0x3F, 0x2A,0xA4, 0xF2, 0x84,0xF4, 0x06} };
const GUID IID_ISmsChunkCollection = {0xBBDA7D2D, 0xB1C2, 0x4AF9,{ 0xAB, 0x5B, 0xD7,0x62, 0x34, 0x1D,0x89, 0x03} };
const GUID IID_ISmsChunk = {0xA9062508, 0xC926, 0x4415,{ 0xAB, 0xB7, 0xA5,0xA4, 0x6D, 0xB3,0x44, 0x56} };
const GUID IID_ISmsMessageCollection = {0x1D5BAB2E, 0x69CC, 0x4136,{ 0x8E, 0x02, 0xFC,0x20, 0x76, 0x7D,0xC9, 0xE2} };
const GUID IID_IFileTransferCollection = {0x70A59A25, 0xE823, 0x4C3F,{ 0x8F, 0x33, 0x77,0x50, 0x08, 0x89,0x5E, 0xE3} };
const GUID IID_IFileTransfer = {0x4D36B368, 0xB88C, 0x45FA,{ 0xB1, 0x36, 0x3E,0xF7, 0x7B, 0x2E,0xAD, 0x39} };
const GUID IID_ICallChannelCollection = {0x8CB09087, 0xE389, 0x4C6D,{ 0xA6, 0xA2, 0x7D,0x4B, 0xCA, 0x85,0x45, 0xD9} };
const GUID IID_ICallChannelMessage = {0x0EF6FD5D, 0x607D, 0x4EA3,{ 0x9C, 0x90, 0x68,0x3D, 0x73, 0x44,0x9E, 0x9D} };
const GUID IID_ISkypeApplication = {0x55A5200C, 0xB2E8, 0x4795,{ 0xA6, 0xFA, 0x85,0x8C, 0xA3, 0xFE,0x2F, 0x26} };
const GUID IID_ISkypeCall = {0x54590FC3, 0x0405, 0x4A2D,{ 0xB4, 0xA5, 0xBE,0xAC, 0x02, 0x65,0x77, 0xF2} };
const GUID IID_ISkypeChat = {0x3F6758D2, 0x1D3C, 0x4A8F,{ 0xBD, 0x99, 0x6F,0xC6, 0xB0, 0xE2,0xDC, 0x8F} };
const GUID IID_ISkypeChatMessage = {0xA569B841, 0xCC8A, 0x4C12,{ 0xB9, 0x37, 0xCB,0xC1, 0x7D, 0x9E,0x64, 0xF0} };
const GUID IID_ISkypeChatMember = {0x6CF6DBDE, 0xAB7C, 0x4635,{ 0x96, 0xED, 0x2F,0xF5, 0x25, 0xAB,0x44, 0x57} };
const GUID IID_ISkypeConference = {0x30678F8A, 0xC104, 0x40C0,{ 0xA6, 0xAE, 0x7C,0x15, 0x0E, 0x83,0x30, 0x0E} };
const GUID IID_ISkypeFileTransfer = {0x2B929860, 0x6AF4, 0x40DF,{ 0x9D, 0x77, 0x30,0x8C, 0xA7, 0xC2,0x3E, 0x66} };
const GUID IID_ISkypeSms = {0x6D0B4547, 0x771D, 0x4C4F,{ 0xB3, 0xE8, 0x98,0xA3, 0x3F, 0xD2,0x4D, 0x2B} };
const GUID IID_ISkypeUser = {0xC219279C, 0xF557, 0x4BAD,{ 0xB3, 0xBE, 0x75,0x0E, 0x91, 0xCA,0x99, 0x44} };
const GUID IID_ISkypeVoicemail = {0x4D33E14E, 0x9921, 0x4860,{ 0x92, 0xF4, 0x5D,0xC1, 0x58, 0x6F,0x40, 0x3C} };
const GUID DIID__ISkypeEvents = {0xF4F90CDD, 0xC620, 0x4118,{ 0x94, 0x5E, 0xCA,0xA1, 0xBB, 0xEB,0xA4, 0x35} };
const GUID DIID__ICallChannelManagerEvents = {0x497ABB45, 0x20AE, 0x49D1,{ 0xA3, 0x9D, 0xCB,0xE8, 0x4A, 0x31,0xB2, 0x0C} };
const GUID CLSID_Skype = {0x830690FC, 0xBF2F, 0x47A6,{ 0xAC, 0x2D, 0x33,0x0B, 0xCB, 0x40,0x26, 0x64} };
const GUID IID_ISkypePlugin = {0xB77A3D1F, 0x6847, 0x402F,{ 0xBB, 0x82, 0xA0,0x56, 0x43, 0x79,0x08, 0x8E} };
const GUID CLSID_User = {0x3E01D8E0, 0xA72B, 0x4C9F,{ 0x99, 0xBD, 0x8A,0x6E, 0x7B, 0x97,0xA4, 0x8D} };
const GUID CLSID_UserCollection = {0x7B030003, 0x037D, 0x490D,{ 0x91, 0x69, 0xA4,0xF3, 0x91, 0xB3,0xD8, 0x31} };
const GUID CLSID_Conversion = {0x2EEAB6D0, 0x491E, 0x4962,{ 0xBB, 0xA1, 0xFF,0x1C, 0xCA, 0x6D,0x4D, 0xD0} };
const GUID CLSID_Call = {0xD26B1D42, 0x9C42, 0x4E7B,{ 0xBB, 0x73, 0x86,0x38, 0x4C, 0x4B,0x43, 0x45} };
const GUID CLSID_CallCollection = {0xF3188CF3, 0xEF22, 0x4C5B,{ 0x92, 0xCB, 0x60,0x59, 0x64, 0x76,0x1C, 0x3B} };
const GUID CLSID_Chat = {0x7ACDC5B4, 0x76A1, 0x4BDF,{ 0x91, 0x8D, 0x69,0x62, 0xFC, 0xAB,0xBA, 0xD3} };
const GUID CLSID_ChatCollection = {0x15B6FEE5, 0x5FB3, 0x4071,{ 0xAC, 0x1F, 0x7A,0xED, 0xC0, 0xE2,0xA6, 0xBB} };
const GUID CLSID_Participant = {0x52071016, 0xE648, 0x4D3B,{ 0xB5, 0x7E, 0x2B,0x46, 0xCC, 0x99,0x3C, 0xE0} };
const GUID CLSID_ParticipantCollection = {0xE1BC9147, 0xC3E3, 0x4E8A,{ 0x83, 0x04, 0x5E,0x6B, 0x5C, 0x1C,0x07, 0x74} };
const GUID CLSID_Conference = {0xA983C9EC, 0xD73E, 0x4364,{ 0xB8, 0x9B, 0xAC,0xD1, 0xE4, 0x05,0x67, 0x4F} };
const GUID CLSID_ConferenceCollection = {0x3506CDB7, 0x8BC6, 0x40C0,{ 0xB1, 0x08, 0xCE,0xA0, 0xB9, 0x48,0x01, 0x30} };
const GUID CLSID_Voicemail = {0xDD0E8ED5, 0x1494, 0x4B87,{ 0xA3, 0x5C, 0x39,0xF6, 0xED, 0x4B,0x11, 0x53} };
const GUID CLSID_VoicemailCollection = {0xA7DF2611, 0xD752, 0x4C9F,{ 0xA9, 0x0A, 0xB5,0x6F, 0x18, 0x48,0x5E, 0xE9} };
const GUID CLSID_App = {0x29DCD339, 0xD184, 0x469B,{ 0x8B, 0xFB, 0x19,0x9A, 0x2C, 0xCF,0x01, 0x4E} };
const GUID CLSID_ApplicationStream = {0x6FA10A39, 0x4760, 0x4C94,{ 0xA2, 0x10, 0x23,0x98, 0x84, 0x86,0x18, 0xEC} };
const GUID CLSID_ApplicationStreamCollection = {0x4B42750B, 0x57A1, 0x47E7,{ 0xB3, 0x40, 0x8E,0xAE, 0x0E, 0x31,0x26, 0xA4} };
const GUID CLSID_ChatMessage = {0x9017071A, 0x2E34, 0x4C3A,{ 0x9B, 0xBB, 0x68,0x8C, 0xBB, 0x5A,0x9F, 0xF2} };
const GUID CLSID_ChatMessageCollection = {0x10DD084E, 0xA5AE, 0x456F,{ 0xA3, 0xBE, 0xDA,0x67, 0xEB, 0xE6,0xB0, 0x90} };
const GUID CLSID_Profile = {0x452CCB69, 0x6A95, 0x4370,{ 0x9E, 0x5A, 0xB3,0xEF, 0xB0, 0x6A,0x76, 0x51} };
const GUID CLSID_Group = {0x222C0F35, 0x3D78, 0x4570,{ 0x9F, 0x6D, 0xBA,0xEE, 0x28, 0x9D,0x03, 0x04} };
const GUID CLSID_GroupCollection = {0xA8109DB9, 0x88E0, 0x42FE,{ 0x98, 0xEA, 0x8A,0x12, 0xBE, 0x53,0x94, 0xC6} };
const GUID CLSID_Settings = {0xB0FE88F0, 0xC92F, 0x46D6,{ 0x87, 0x8F, 0x31,0x59, 0x9B, 0xEA,0x94, 0x4C} };
const GUID CLSID_Client = {0xB09AC3FF, 0x0D5D, 0x41C6,{ 0xA3, 0x4E, 0x7C,0x3F, 0x58, 0xA3,0x12, 0x7C} };
const GUID CLSID_Command = {0x2DBCDA9F, 0x1248, 0x400B,{ 0xA3, 0x82, 0xA5,0x6D, 0x71, 0xBF,0x7B, 0x15} };
const GUID CLSID_CallChannel = {0x89DD2F9D, 0xC325, 0x48BF,{ 0xA6, 0x15, 0x96,0xBD, 0x03, 0x9B,0xBC, 0x83} };
const GUID CLSID_CallChannelCollection = {0x42FE718B, 0xA148, 0x41D6,{ 0x88, 0x5B, 0x01,0xA0, 0xAF, 0xAE,0x87, 0x23} };
const GUID CLSID_CallChannelManager = {0x5E541E71, 0xA474, 0x4EAD,{ 0x8F, 0xCB, 0x24,0xD4, 0x00, 0xD0,0x23, 0xB7} };
const GUID CLSID_CallChannelMessage = {0x3D3E7C1B, 0x79A7, 0x4CC7,{ 0x89, 0x25, 0x41,0xFA, 0x81, 0x3E,0x99, 0x13} };
const GUID CLSID_IEProtocolHandler = {0xFFC8B962, 0x9B40, 0x4DFF,{ 0x94, 0x58, 0x18,0x30, 0xC7, 0xDD,0x7F, 0x5D} };
const GUID CLSID_SmsMessage = {0xF278D870, 0x7AF7, 0x4957,{ 0x96, 0xEE, 0xE6,0xAC, 0x72, 0xD0,0xB1, 0x09} };
const GUID CLSID_SmsMessageCollection = {0x1BCA4635, 0xF1FC, 0x44C8,{ 0xB8, 0x29, 0x48,0x22, 0x9A, 0xEB,0x32, 0xE3} };
const GUID CLSID_SmsChunk = {0x5792FC7D, 0x5E1D, 0x4F1A,{ 0xBD, 0x4F, 0xA7,0xA5, 0x0F, 0x92,0xBC, 0x6E} };
const GUID CLSID_SmsChunkCollection = {0xCC461FC3, 0xC9BE, 0x41FB,{ 0x8E, 0x47, 0xE0,0x11, 0x5C, 0xBC,0x01, 0xCC} };
const GUID CLSID_SmsTarget = {0x61F8FAF0, 0x82D0, 0x407C,{ 0xAE, 0x97, 0x31,0x44, 0x14, 0x83,0xAE, 0x40} };
const GUID CLSID_SmsTargetCollection = {0x6AC51E9C, 0x7947, 0x4B46,{ 0xA9, 0x78, 0x0A,0xD6, 0x01, 0xC4,0xEF, 0xC9} };
const GUID CLSID_PluginMenuItem = {0x3F06DCD2, 0x3A04, 0x463D,{ 0xA0, 0x8B, 0x1F,0xFE, 0xD0, 0x2C,0x4D, 0x4C} };
const GUID CLSID_PluginEvent = {0x9D073235, 0xD787, 0x497D,{ 0x8D, 0x1F, 0x92,0x95, 0x59, 0xF1,0xC6, 0x21} };

};     // namespace Skype4comlib_tlb