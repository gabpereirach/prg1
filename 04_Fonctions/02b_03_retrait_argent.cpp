//
// Created by gabri on 03.10.2024.
//

#include <iostream>
#include <cstdlib>
using namespace std;

void afficher(int retrait_dans_compte, int solde_dans_compte ){
    cout << "la solde est maintenant de " << solde_dans_compte << " et le retrait est de " << retrait_dans_compte << endl;
}

void retirer_argent(double retrait, double& solde){
    if(retrait < solde){
        solde -= retrait;
    }else{
        retrait -= retrait - solde;
        solde = 0;
    }
    afficher(retrait, solde);
}


int main() {
    double solde_courant = 500;

    cout << "la solde du copte est de " << solde_courant << endl;
    retirer_argent(300, solde_courant);
    retirer_argent(300, solde_courant);


    return EXIT_SUCCESS;
}