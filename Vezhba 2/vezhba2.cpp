#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;

// Kreiranje na shpil na karti
vector<string> create_deck() {
    vector<string> deck;
    string suits[] = {"Spades, ", "Clubs, ", "Hearts, ", "Diamonds, "};
    string ranks[] = { "Ace ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9 ", "10 ", "Jack ", "Queen ", "King "};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            deck.push_back(ranks[j] + "of " + suits[i]);
        }
    }

    // Dodavanje na dzhokeri
    deck.push_back("Joker");
    deck.push_back("Joker");

    return deck;
}

// Prikazhuvanje na shpilot
void print_deck(vector<string> deck) {
    for (string card : deck) {
        cout << card << " " << endl;
    }
    cout << endl;
}

// Funkcija za meshanje na kartite
void shuffle_deck(vector<string> &deck) {
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(deck.begin(), deck.end(), default_random_engine(seed));
}

int main() {
    // Kreiranje na nov shpil na karti
    vector<string> deck = create_deck();

    // Prikazhuvanje na noviot shpil
    cout << "Nov shpil na karti: " << endl;
    print_deck(deck);

    // Meshanje na kartite:
    shuffle_deck(deck);

    // Izmeshani karti
    cout << "Izmeshan shpil na karti: " << endl;
    print_deck(deck);

    return 0;
}