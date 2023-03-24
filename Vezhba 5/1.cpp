#include <iostream>
#include <string>
using namespace std;

void modifyName(string& name) { // Znaci za ime
    if (name.length() >= 4) {
        name[0] = '$';
        name[1] = '!';
        name[2] = '^';
        name[3] = '*';
    }
}

void modifySurname(string& surname) { //Znaci za prezime
    if (surname.length() >= 4) {
        surname[0] = '%';
        surname[1] = '#';
        surname[2] = '@';
        surname[3] = '`';
    }
}

int main() {
    string Ime, Prezime;

    cout << "Vnesi ime: ";
    getline(cin, Ime);

    cout << "Vnesi prezime: ";
    getline(cin, Prezime);

    cout << "Celosno ime: " << Ime << " " << Prezime << endl;

    modifyName(Ime); //Menuvanje na imeto
    modifySurname(Prezime); //Menuvanje na prezimeto

    cout << "Izmeneto ime: " << Ime << endl;
    cout << "Izmeneto prezime: " << Prezime << endl;


    return 0;
}