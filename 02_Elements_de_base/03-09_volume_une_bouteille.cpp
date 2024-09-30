//
// Created by gabri on 26.09.2024.
//
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const double pi = 3.14;
    const double cm3_en_litre = 1E-3; // 1 litre = 1000 cm3

    double rc1, rc2, hc1, hc2, htc;
    cout << "Entrez le rayon du cylindre 1 [cm] : ";
    cin >> rc1;
    cout << "Entrez le rayon du cylindre 2 [cm] : ";
    cin >> rc2;
    cout << "Entrez la hauteur du cylindre 1 [cm] : ";
    cin >> hc1;
    cout << "Entrez la hauteur du cylindre 2 [cm] : ";
    cin >> hc2;
    cout << "Entrez la hauteur du tronc de cone [cm] : ";
    cin >> htc;

    const double volume_cylindre1 = pi * rc1 * rc1 * hc1;
    const double volume_cylindre2 = pi * rc2 * rc2 * hc2;
    const double volume_tronquer_cone = (rc1 * rc1 + rc2 * rc2 + rc1 * rc2) * htc * pi / 3;
    
    const double volume_total = (volume_cylindre1 + volume_cylindre2 + volume_tronquer_cone) * cm3_en_litre;
    cout << "La contenance de la bouteille est de " << volume_total << " litre" << endl;

    return EXIT_SUCCESS;
}
