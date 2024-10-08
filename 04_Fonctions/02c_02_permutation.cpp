//
// Created by gabri on 08.10.2024.
//
#include <cstdlib>
#include <iostream>

using namespace std;

void permutationCirculaireDroite(double* x, double* y, double* z) {
    double tmp = *z;
    *z = *y;
    *y = *x;
    *x = tmp;
}

void afficher(double x, double y, double z) {
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
}

int main() {
    double x = 1, y = 2, z = 3;
    for (int i = 1; i <= 3; ++i) {
        permutationCirculaireDroite(&x, &y, &z);
        afficher(x, y, z);
    }
    return EXIT_SUCCESS;
}