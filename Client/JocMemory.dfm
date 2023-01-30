object Form1: TForm1
  Left = 121
  Top = 205
  Width = 941
  Height = 480
  Caption = 'Form1'
  Color = clMenuHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 24
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image1Click
  end
  object Image2: TImage
    Left = 120
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image2Click
  end
  object Image3: TImage
    Left = 216
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image3Click
  end
  object Image4: TImage
    Left = 312
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image4Click
  end
  object Image5: TImage
    Left = 408
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image5Click
  end
  object Image6: TImage
    Left = 504
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image6Click
  end
  object Image7: TImage
    Left = 600
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image7Click
  end
  object Image8: TImage
    Left = 696
    Top = 16
    Width = 89
    Height = 89
    OnClick = Image8Click
  end
  object Image9: TImage
    Left = 24
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image9Click
  end
  object Image10: TImage
    Left = 120
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image10Click
  end
  object Image11: TImage
    Left = 216
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image11Click
  end
  object Image12: TImage
    Left = 312
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image12Click
  end
  object Image13: TImage
    Left = 408
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image13Click
  end
  object Image14: TImage
    Left = 504
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image14Click
  end
  object Image15: TImage
    Left = 600
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image15Click
  end
  object Image16: TImage
    Left = 696
    Top = 112
    Width = 89
    Height = 89
    OnClick = Image16Click
  end
  object Image17: TImage
    Left = 24
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image17Click
  end
  object Image18: TImage
    Left = 120
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image18Click
  end
  object Image19: TImage
    Left = 216
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image19Click
  end
  object Image20: TImage
    Left = 312
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image20Click
  end
  object Image21: TImage
    Left = 408
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image21Click
  end
  object Image22: TImage
    Left = 504
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image22Click
  end
  object Image23: TImage
    Left = 600
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image23Click
  end
  object Image24: TImage
    Left = 696
    Top = 208
    Width = 89
    Height = 89
    OnClick = Image24Click
  end
  object Image25: TImage
    Left = 24
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image25Click
  end
  object Image26: TImage
    Left = 120
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image26Click
  end
  object Image27: TImage
    Left = 216
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image27Click
  end
  object Image28: TImage
    Left = 312
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image28Click
  end
  object Image29: TImage
    Left = 408
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image29Click
  end
  object Image30: TImage
    Left = 504
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image30Click
  end
  object Image31: TImage
    Left = 600
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image31Click
  end
  object Image32: TImage
    Left = 696
    Top = 304
    Width = 89
    Height = 89
    OnClick = Image32Click
  end
  object Label1: TLabel
    Left = 856
    Top = 200
    Width = 6
    Height = 13
    Caption = '0'
  end
  object Label2: TLabel
    Left = 848
    Top = 336
    Width = 3
    Height = 13
  end
  object Label3: TLabel
    Left = 848
    Top = 176
    Width = 33
    Height = 13
    Caption = 'SCOR '
  end
  object btnExit: TButton
    Left = 824
    Top = 24
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = btnExitClick
  end
  object btnStart: TButton
    Left = 824
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 1
    OnClick = btnStartClick
  end
  object btnConnect: TButton
    Left = 824
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Conectare'
    TabOrder = 2
    OnClick = btnConnectClick
  end
  object Timer: TTimer
    Enabled = False
    Interval = 5000
    OnTimer = TimerTimer
    Left = 848
    Top = 240
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 848
    Top = 288
  end
  object ClientSocket: TClientSocket
    Active = False
    Address = '192.168.0.101'
    ClientType = ctNonBlocking
    Port = 2000
    OnConnect = ClientSocketConnect
    OnRead = ClientSocketRead
    Left = 848
    Top = 368
  end
end
