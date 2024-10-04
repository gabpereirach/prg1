//
// Created by gabri on 03.10.2024.
//
#include <iostream>
using namespace std;

const char etoile = '*';
const char blanc = ' ';
int main() {

    int hauteur;
    do {
        cout << "Hauteur du triangle (h > 0) : ";
        cin >> hauteur;
    } while (hauteur <= 0);
    cout << endl;

    int nbr = 1;
    for (int ligne = 0; ligne <= hauteur; ++ligne) {
        for (int i = 0; i < hauteur - ligne - 1; ++i)
            cout << blanc;
        for(int nbr_i = 1; nbr_i <= nbr; ++nbr_i)
            cout << etoile;
        for (int i = 0; i < hauteur - ligne - 1; ++i)
            cout << blanc;
        nbr += 2;
        cout << endl;
    }
    return EXIT_SUCCESS;
}