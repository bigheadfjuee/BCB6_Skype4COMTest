object Form1: TForm1
  Left = 271
  Top = 171
  Width = 640
  Height = 352
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object ListBox1: TListBox
    Left = 9
    Top = 9
    Width = 149
    Height = 198
    ItemHeight = 16
    TabOrder = 0
  end
  object btnChat: TButton
    Left = 173
    Top = 68
    Width = 92
    Height = 31
    Caption = 'Chat'
    TabOrder = 1
    OnClick = btnChatClick
  end
  object btnCall: TButton
    Left = 173
    Top = 116
    Width = 92
    Height = 30
    Caption = 'Call'
    TabOrder = 2
    OnClick = btnCallClick
  end
  object Memo1: TMemo
    Left = 345
    Top = 14
    Width = 227
    Height = 110
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object btnOutputFile: TButton
    Left = 173
    Top = 165
    Width = 129
    Height = 44
    Caption = 'Skype output file'
    TabOrder = 4
    OnClick = btnOutputFileClick
  end
  object btnInitSkype: TButton
    Left = 176
    Top = 16
    Width = 97
    Height = 33
    Caption = 'initSkype'
    TabOrder = 5
    OnClick = btnInitSkypeClick
  end
end
