//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Uconvertisseur.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrConvert *frConvert;
//---------------------------------------------------------------------------
__fastcall TfrConvert::TfrConvert(TComponent* Owner)
	: TForm(Owner)
{
}
 // fontion de convertion des poids
double ConvertPoids(double valeur, const String& de, const String& vers)
{
	// Convertir d'abord en kg (unité de base)
	double enKg = 0.0;
	if (de == "kg") enKg = valeur;
	else if (de == "g") enKg = valeur / 1000.0;
	else if (de == "lb") enKg = valeur / 2.20462;
	else if (de == "oz") enKg = valeur / 35.274;

	// Puis convertir de kg vers l'unité cible
	if (vers == "kg") return enKg;
	else if (vers == "g") return enKg * 1000.0;
	else if (vers == "lb") return enKg * 2.20462;
	else if (vers == "oz") return enKg * 35.274;

	return valeur; // fallback
}
// fonction de conversion distance
double ConvertDistance(double valeur, const String& de, const String& vers)
{
	// Convertir d'abord en kg (unité de base)
	double enMetre = 0.0;
	if (de == "m") enMetre = valeur;
	else if (de == "km") enMetre = valeur * 1000.0;
	else if (de == "mi") enMetre = valeur * 1609.34 ;
	else if (de == "ft") enMetre = valeur * 0.3048;

	// Puis convertir de kg vers l'unité cible
	if (vers == "m") return enMetre;
	else if (vers == "km") return enMetre / 1000.0;
	else if (vers == "mi") return enMetre / 1609.34;
	else if (vers == "ft") return enMetre / 0.3048;

	return valeur; // fallback
}

// fonction de convertion devise
double ConvertDevise(double valeur, const String& de, const String& vers)
{
    // Taux fixes (1 EUR = ...)
    double tauxEUR = 1.0;
    double tauxUSD = 1.08;   // 1 EUR = 1.08 USD
    double tauxGBP = 0.85;   // 1 EUR = 0.85 GBP

    // Convertir vers EUR d'abord
    double enEUR = 0.0;
    if (de == "EUR") enEUR = valeur;
    else if (de == "USD") enEUR = valeur / tauxUSD;
    else if (de == "GBP") enEUR = valeur / tauxGBP;
    else return valeur;

    // Puis vers la devise cible
    if (vers == "EUR") return enEUR;
    else if (vers == "USD") return enEUR * tauxUSD;
    else if (vers == "GBP") return enEUR * tauxGBP;
    return valeur;
}

//---------------------------------------------------------------------------
void __fastcall TfrConvert::FormCreate(TObject *Sender)
{

    // Poids
	cbPoidsDe->Items->Add("kg");
	cbPoidsDe->Items->Add("g");
    cbPoidsDe->Items->Add("lb");
    cbPoidsDe->Items->Add("oz");
    cbPoidsDe->ItemIndex = 0;

    cbPoidsVers->Items = cbPoidsDe->Items;
    cbPoidsVers->ItemIndex = 1;

    // Distance
    cbDistDe->Items->Add("m");
    cbDistDe->Items->Add("km");
    cbDistDe->Items->Add("mi");
    cbDistDe->Items->Add("ft");
    cbDistDe->ItemIndex = 0;

	cbDistVers->Items = cbDistDe->Items;
    cbDistVers->ItemIndex = 1;

    // Devise
	cbDeviseDe->Items->Add("EUR");
    cbDeviseDe->Items->Add("USD");
    cbDeviseDe->Items->Add("GBP");
    cbDeviseDe->ItemIndex = 0;

    cbDeviseVers->Items = cbDeviseDe->Items;
    cbDeviseVers->ItemIndex = 1;

}
//---------------------------------------------------------------------------
void __fastcall TfrConvert::btnConvertirClick(TObject *Sender)
{
	 try
	{
		double val = StrToFloat(edDeviseValeur->Text);
		String de = cbPoidsDe->Text;
		String vers = cbPoidsVers->Text;
		double resultat = ConvertPoids(val, de, vers);
		lblDeviseResultat->Caption = FloatToStrF(resultat, ffFixed, 10, 4);
	}
	catch (...)
	{
		ShowMessage("Veuillez entrer une valeur numérique valide.");
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrConvert::Button3Click(TObject *Sender)
{
		 try
	{
		double val = StrToFloat(edDistanceValeur->Text);
		String de = cbDistDe->Text;
		String vers = cbDistVers->Text;
		double resultat = ConvertDistance(val, de, vers);
		lblDistanceResultat->Caption = FloatToStrF(resultat, ffFixed, 10, 4);
	}
	catch (...)
	{
		ShowMessage("Veuillez entrer une valeur numérique valide.");
	}
}
//---------------------------------------------------------------------------
void __fastcall TfrConvert::Button2Click(TObject *Sender)
{
	try
	{
		double val = StrToFloat(edDeviseValeur->Text);
		String de = cbDeviseDe->Text;
		String vers = cbDeviseVers->Text;
		double resultat = ConvertDevise(val, de, vers);
		lblDeviseResultat->Caption = FloatToStrF(resultat, ffFixed, 10, 4);
	}
	catch (...)
	{
		ShowMessage("Veuillez entrer une valeur numérique valide.");
	}
}
//---------------------------------------------------------------------------
