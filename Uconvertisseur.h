//---------------------------------------------------------------------------

#ifndef UconvertisseurH
#define UconvertisseurH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TfrConvert : public TForm
{
__published:	// Composants gérés par l'EDI
	TPageControl *PageControl1;
	TTabSheet *Poids;
	TTabSheet *Devise;
	TTabSheet *Distance;
	TEdit *edPoidsValeur;
	TLabel *Label1;
	TLabel *Label2;
	TComboBox *cbPoidsDe;
	TLabel *Label3;
	TComboBox *cbPoidsVers;
	TButton *btnConvertir;
	TLabel *lblPoidsResultat;
	TLabel *Label5;
	TEdit *edDeviseValeur;
	TLabel *Label6;
	TComboBox *cbDeviseDe;
	TLabel *Label7;
	TComboBox *cbDeviseVers;
	TButton *Button2;
	TLabel *lblDeviseResultat;
	TLabel *Label9;
	TEdit *edDistanceValeur;
	TLabel *Label10;
	TComboBox *cbDistDe;
	TLabel *Label11;
	TComboBox *cbDistVers;
	TButton *Button3;
	TLabel *lblDistanceResultat;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnConvertirClick(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TfrConvert(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrConvert *frConvert;
//---------------------------------------------------------------------------
#endif
