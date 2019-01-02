#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    char wybor_menu, poprawnosc_danych;
    string marka, model;
    int cena_zakup, cena_sprzedaz;

    while(wybor_menu!=27)
    {
        cout<<"Witaj w phone managment!" <<endl;
        cout<<"Menu" <<endl;
        cout<<"1.Dodaj produkt." <<endl;
        cout<<"2.Wyswietl produkty." <<endl;
        cout<<"Nacisnij ESC aby wyjsc." <<endl;
        wybor_menu = getch();
        system( "cls ");

        switch(wybor_menu)
        {
            case '1':
                while( poprawnosc_danych!='N' )
                {
                    system( "cls" );
                    cout<<"Podaj marke telefonu: ";
                    cin>>marka;
                    cout<<"Podaj model telefonu: ";
                    cin>>model;
                    cout<<"Podaj cene zakupu: ";
                    cin>>cena_zakup;
                    cout<<"Podaj cene sprzedazy: ";
                    cin>>cena_sprzedaz;
                    cout<<"Czy wprowadzone dane sa poprawne? [T/N]: ";
                }
                break;

            case '2':
                system( "cls" );
                cout<<"2!" <<endl;
                break;
        }
    }
    return 0;
}
