//
// Created by gabri on 01.10.2024.
//
#include <iostream>
using namespace std;

int main() {
    double note;

    cout << "Entrez la note UNIGE (entre 0 et 6): " << endl;
    cin >> note;
    cout << "La note ECTS est : " << endl;

    if ((note >= 5.25) && (note <= 6.)) {
        cout << "A" << endl;
    } else if ((note < 5.25) && (note >= 4.75)) {
        cout << "B" << endl;
    } else if ((note < 4.75) && (note >= 4.5)) {
        cout << "C" << endl;
    } else if ((note < 4.5) && (note >= 4.25)) {
        cout << "D" << endl;
    } else if ((note < 4.25) && (note > 3.75)) {
        cout << "E" << endl;
    }else if ((note <= 3.75) && (note >= 0)) {
        cout << "F" << endl;
    } else {
        cout << "La note ne peut pas être sortie car il y a une erreur d'entrée." << endl;
    }
}

