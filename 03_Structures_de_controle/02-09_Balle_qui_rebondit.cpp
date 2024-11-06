//
// Created by gabri on 03.10.2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const double g = 9.81;
    double h;

    double coeff;
    do {
    cout << "Coefficient de rebond (0 <= coeff < 1) : ";
    cin >> coeff ;
    } while (coeff < 0 && coeff >= 1);

    double hauteur_init;
    do{
    cout << "Hauteur initiale [m]  (h0 >= 0)        : ";
    cin >> hauteur_init;
    } while (hauteur_init < 0);

    int nbr_rebonds;
    do{
    cout << "Nombre de rebonds     (n >= 0)         : ";
    cin >> nbr_rebonds;
    } while (nbr_rebonds < 0);

    double hauteur_final = hauteur_init;
    for(int nbr_rebonds_initial = 0; nbr_rebonds_initial < nbr_rebonds; nbr_rebonds_initial++){
        double v_impact = sqrt(2 * g * hauteur_final);
        double v_rebonds = coeff * v_impact;
        double h_apres_rebonds = (v_rebonds * v_rebonds)/(2 * g);
        hauteur_final = h_apres_rebonds;
    }

    cout << "La hauteur atteinte apres " << nbr_rebonds << " rebonds : " << hauteur_final << " [m]." << endl;
    return EXIT_SUCCESS;
}