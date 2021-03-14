#include "Samochod.h"
#include <iostream>
using namespace std;

Samochod::Samochod(string ma, string mo, string k, int r, int p)
{
	marka = ma;
	model = mo;
	kolor = k;
	rok_produkcji = r;
	przebieg = p;
}

void Samochod::opis()
{
	cout << "Marka: " << marka << endl;
	cout << "Model: " << model << endl;
	cout << "kolor: " << kolor << endl;
	cout << "Rok produkcji: " << rok_produkcji << endl;
	cout << "Przebieg: " << przebieg << endl;
}

string Samochod::info()
{
	return "Obiekty tej klasy przechowuj¹ dane samochodu: marka, model, kolor, rok produkcji, przebieg";
}
