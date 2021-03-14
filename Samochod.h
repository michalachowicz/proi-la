#pragma once
#include <iostream>
using namespace std;
class Samochod
{
public:
	string marka;
	string model;
	string kolor;
	int rok_produkcji;
	int przebieg;

public:
	Samochod(string = "", string = "", string = "", int = 0, int = 0);

	void opis();

	string info();
};

