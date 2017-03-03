/*
 * szyfrcezara.cpp
 *
 * Copyright 2017 user <user@lap79>
 *
 */




#include <iostream>

using namespace std;

void szyfruj(char tekst[], int klucz) {
    klucz = klucz % 26;
    while (tekst[i] !='\0'){
        if((int)tekst[i] + klucz > 122)
            tekst[i] =(char)((int)tekst[i] + klucz - 26);
        i++;
    }

}

int main(int argc, char **argv)
{
    char tekst[100];
    int klucz = 3;
    cout << "podaj tekst ; " << endl;
    cin >> tekst;
    cout << "podaj klucz;" ;
    cin >> klucz;
    szyfruj(tekst, klucz);
    cout << tekst;
	return 0;
}

