#include <iostream>
#include "Samochod.h"
using namespace std;

int main()
{
#ifdef _DEBUG
    cout << "JESTES W TRYBIE DEBUG" << endl;
#endif
    Samochod s1("fiat", "tipo", "czarny", 2004, 234000);
    s1.opis();
    cout<<s1.info()<<endl;

    //Samochod s2("fiat", "tipo", "czarny", "dsf", "sdf");
    //błąd konwersji typów - oczekiwano int a wpisano string
    // 
    //s1.przebieg = s1.przebieg * 10000;
    //cout << s1.przebieg;
    //wyjście poza rozmiar int - program liczy wartość, ale jest błędna

    float stan_konta = 0.0;
    float kwant = 0.01f;
    float stan;

    while (true)
    {
        stan = stan_konta + kwant;
        if (stan_konta >= stan_konta + kwant)
        {
            stan = stan_konta + kwant;
            //cout << stan_konta + kwant<<endl;
            //cout << stan_konta;
            break;
        }
        stan_konta += kwant;
    }
    //maksymlną wartość dla typu float dla którego poprawnie działa dodawanie kwantu 1 grosza wynosi 262144
}
