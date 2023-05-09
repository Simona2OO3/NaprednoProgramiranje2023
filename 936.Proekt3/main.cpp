#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {    //Definiranje i pechatenje na stringot
    const string sodrzhina = "936.Simona  Ghost   Communication is key    When you unlock to believe  Can you see what I see";
    cout << "================== Sodrzhinata na tekstot e ==================: " << "\n" << sodrzhina << "\n==============================================================\n" <<endl;

    cout << "Vnesete go vashiot broj na indeks: ";
    int indeks;
    cin >> indeks;

    // Baranje najgolema cifra od vneseniot tricifren broj
    int max_digit = 0;
    while (indeks > 0) {
        int digit = indeks % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        indeks /= 10;
    }
    cout << "Najgolemata cifra od vashiot broj na indeks e: " << max_digit << "\n \n===============================================================\n" <<endl;

    // Zemanje na ASCII vrednostite od stringot i podreduvanje na istite
    vector<int> ascii_values;
    for (char c : sodrzhina) {
        ascii_values.push_back((int)c + 1);
    }

    // Sortiranje na vektorot i pechatenje na konzolata
    sort(ascii_values.begin(), ascii_values.end());
    cout << "Sortiran vektor od ASCII vrednosti: ";
    for (int value : ascii_values) {
        cout << value << " ";
    }
    cout << endl;

    // Zapishuvanje na vektorot vo datoteka
    ofstream outfile("936.Proekt3.txt");
    for (int value : ascii_values) {
        outfile << value << " ";
    }
    outfile.close();

    return 0;
}
