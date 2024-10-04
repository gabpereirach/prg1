//
// Created by gabri on 03.10.2024.
//
#include <iostream>
using namespace std;

int main(){
    double montant_initial;
    double taux_interet_ann;
    int nbr_ann;

    cout << "Enter initial value: " << endl;
    cin >> montant_initial;
    cout << "Enter cible value: " << endl;
    cin >> taux_interet_ann;
    cout << "Enter after how many years: " << endl;
    cin >> nbr_ann;

    double montant = montant_initial;
    for (int nbr_ann_act = 0; nbr_ann_act < nbr_ann; ++nbr_ann_act) {
        montant = montant * (1.0 + taux_interet_ann / 100.0);
    }

    cout << "Le montant disponible après " << nbr_ann << " an" << (nbr_ann > 1 ? "s" : "") << " est de " << montant << " CHF" << endl;

    return EXIT_SUCCESS;
}