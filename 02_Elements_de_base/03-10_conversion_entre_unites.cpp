//
// Created by gabriel on 26.09.2024.
//
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const double convert_miles = 0.000621;
    const double convert_feet = 3.28084;
    const double convert_inches = 39.3701;

    int metre;
    cout << "Entrez le nombre de metres a convertir (entier > 0) : ";
    cin >> metre;
    cout << metre << "m" << endl;
    double miles = metre * convert_miles;
    double feets = metre * convert_feet;
    double inches = metre * convert_inches;

    cout << "=" << miles << " [miles]" << endl
         << "=" << feets << " [feets]" << endl
         << "=" << inches << " [inches]" << endl;

    return EXIT_SUCCESS;
}