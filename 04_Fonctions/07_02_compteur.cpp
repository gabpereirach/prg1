#include <cstdlib>
#include <iostream>

using namespace std;

void afficher();

int main() {
    afficher();
    return EXIT_SUCCESS;
}

void afficher() {
    static int counter;
    cout << "Appel numéro " << ++counter << endl;
    if (counter < 3)
        afficher();
}