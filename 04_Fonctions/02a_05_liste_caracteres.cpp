//
// Created by gabri on 03.10.2024.
//

#include <iostream>
#include <cstdlib>
using namespace std;

void liste_caracteres(char c1, char c2){
  for (; c1 <= c2; c1++){
      cout << c1;
  }
}

int main() {
    char caracter1;
    char caracter2;

    do{
        cout << "Insert caracter 1: ";
        cin >> caracter1;
        cout << "Insert caracter 2: ";
        cin >> caracter2;
        cout << endl;
    }while(caracter1 >= caracter2);

    liste_caracteres(caracter1, caracter2);
    return EXIT_SUCCESS;
}