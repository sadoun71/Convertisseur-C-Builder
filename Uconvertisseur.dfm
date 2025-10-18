object frConvert: TfrConvert
  Left = 0
  Top = 0
  Caption = 'Convertisseur'
  ClientHeight = 294
  ClientWidth = 437
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  TextHeight = 15
  object PageControl1: TPageControl
    Left = 1
    Top = 1
    Width = 433
    Height = 289
    ActivePage = Poids
    TabOrder = 0
    object Poids: TTabSheet
      Caption = 'Poids'
      object Label1: TLabel
        Left = 74
        Top = 3
        Width = 309
        Height = 29
        Caption = 'Valeur '#224' Convertir'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -24
        Font.Name = 'Swis721 BlkEx BT'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 86
        Top = 95
        Width = 14
        Height = 15
        Caption = 'De'
      end
      object Label3: TLabel
        Left = 245
        Top = 95
        Width = 21
        Height = 15
        Caption = 'Vers'
      end
      object lblPoidsResultat: TLabel
        Left = 125
        Top = 183
        Width = 173
        Height = 65
        Caption = 'resultat'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -48
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object edPoidsValeur: TEdit
        Left = 74
        Top = 35
        Width = 313
        Height = 38
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        Text = '0'
      end
      object cbPoidsDe: TComboBox
        Left = 272
        Top = 92
        Width = 77
        Height = 23
        TabOrder = 1
      end
      object cbPoidsVers: TComboBox
        Left = 106
        Top = 92
        Width = 77
        Height = 23
        TabOrder = 2
      end
      object btnConvertir: TButton
        Left = 191
        Top = 138
        Width = 75
        Height = 25
        Caption = 'Convetir'
        TabOrder = 3
        OnClick = btnConvertirClick
      end
    end
    object Devise: TTabSheet
      Caption = 'Devise'
      ImageIndex = 1
      object Label5: TLabel
        Left = 74
        Top = 3
        Width = 309
        Height = 29
        Caption = 'Valeur '#224' Convertir'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -24
        Font.Name = 'Swis721 BlkEx BT'
        Font.Style = []
        ParentFont = False
      end
      object Label6: TLabel
        Left = 86
        Top = 95
        Width = 14
        Height = 15
        Caption = 'De'
      end
      object Label7: TLabel
        Left = 208
        Top = 95
        Width = 21
        Height = 15
        Caption = 'Vers'
      end
      object lblDeviseResultat: TLabel
        Left = 125
        Top = 183
        Width = 173
        Height = 65
        Caption = 'resultat'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -48
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object edDeviseValeur: TEdit
        Left = 74
        Top = 35
        Width = 313
        Height = 38
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        Text = '0'
      end
      object cbDeviseDe: TComboBox
        Left = 106
        Top = 92
        Width = 77
        Height = 23
        TabOrder = 1
        Text = 'ComboBox1'
      end
      object cbDeviseVers: TComboBox
        Left = 235
        Top = 92
        Width = 77
        Height = 23
        TabOrder = 2
        Text = 'ComboBox2'
      end
      object Button2: TButton
        Left = 191
        Top = 138
        Width = 75
        Height = 25
        Caption = 'Convetir'
        TabOrder = 3
        OnClick = Button2Click
      end
    end
    object Distance: TTabSheet
      Caption = 'Distance'
      ImageIndex = 2
      object Label9: TLabel
        Left = 56
        Top = 21
        Width = 309
        Height = 29
        Caption = 'Valeur '#224' Convertir'
        Font.Charset = ANSI_CHARSET
        Font.Color = clWindowText
        Font.Height = -24
        Font.Name = 'Swis721 BlkEx BT'
        Font.Style = []
        ParentFont = False
      end
      object Label10: TLabel
        Left = 80
        Top = 103
        Width = 14
        Height = 15
        Caption = 'De'
      end
      object Label11: TLabel
        Left = 200
        Top = 103
        Width = 21
        Height = 15
        Caption = 'Vers'
      end
      object lblDistanceResultat: TLabel
        Left = 128
        Top = 175
        Width = 173
        Height = 65
        Caption = 'resultat'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -48
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
      end
      object edDistanceValeur: TEdit
        Left = 56
        Top = 56
        Width = 313
        Height = 38
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -21
        Font.Name = 'Segoe UI'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        Text = '0'
      end
      object cbDistDe: TComboBox
        Left = 100
        Top = 100
        Width = 77
        Height = 23
        TabOrder = 1
        Text = 'ComboBox1'
      end
      object cbDistVers: TComboBox
        Left = 227
        Top = 100
        Width = 77
        Height = 23
        TabOrder = 2
        Text = 'ComboBox2'
      end
      object Button3: TButton
        Left = 160
        Top = 144
        Width = 75
        Height = 25
        Caption = 'Convetir'
        TabOrder = 3
        OnClick = Button3Click
      end
    end
  end
end
