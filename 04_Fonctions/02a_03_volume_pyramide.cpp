//
// Created by gabri on 03.10.2024.
//

#include <iostream>
using namespace std;
//Pyramide 1 : base de longueur 10 et de largeur 3.5; hauteur = 12
//Pyramide 2 : base de longueur 3.6 et de largeur 2.4; hauteur = 2.7
double volume_pyramide_rectangle(double a, double b, double c){
    return a*b*c/3;
}

int main() {
   double base_cote_long;
   double base_cote_short;
   double height;
   for (int i=1; i < 3; ++i){
       cout << "Enter base_cote_long: ";
       cin >> base_cote_long;
       cout << "Enter base_cote_short: ";
       cin >> base_cote_short;
       cout << "Enter height: ";
       cin >> height;
       cout << endl;
       cout << "le volume de la pyramide " << i << " est de " << volume_pyramide_rectangle(base_cote_long, base_cote_short, height) << " cm^3." << endl;
   }

  return EXIT_SUCCESS;
}