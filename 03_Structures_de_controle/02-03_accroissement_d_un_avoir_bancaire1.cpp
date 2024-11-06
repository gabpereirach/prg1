//
// Created by gabri on 03.10.2024.
//
#include <iostream>
using namespace std;

int main(){
    double montant_initial;
    double montant_cible;
    double taux_interet_ann;

    cout << "Enter initial value: " << endl;
    cin >> montant_initial;
    cout << "Enter cible value: " << endl;
    cin >> montant_cible;
    cout << "Enter cible value: " << endl;
    cin >> taux_interet_ann;

    if(montant_initial < montant_cible && taux_interet_ann <= 0.0) {
        cout << "Le montant ne sera jamais atteint" << endl;
        return EXIT_SUCCESS;
    }
    double montant = montant_initial;
    int nb_annees = 0;
    while (montant < montant_cible) {
        ++nb_annees;
        montant = montant * (1.0 + taux_interet_ann / 100.0);
    }

    cout << "Le montant cible est atteint apres "
        << nb_annees << " an" << (nb_annees > 1 ? "s" : "") << "." << endl;

    return EXIT_SUCCESS;
}