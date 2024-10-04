//
// Created by gabri on 03.10.2024.
//

#include <iostream>
using namespace std;

int main() {
  int nombre1, nombre2;

  do{
    cout << "Donnez 2 nombres entiers positifs : ";
    cin >> nombre2 >> nombre1;
  } while(nombre1 <= 0 || nombre2 <= 0);

  int mini = nombre1 < nombre2 ? nombre1 : nombre2;
  int maxi = nombre1 < nombre2 ? nombre2 : nombre1;
  int ppmc = maxi;

  while (ppmc % mini != 0)
    ppmc += maxi;

  cout << "ppmc (" << nombre1 << "," << nombre2 << ") = " << ppmc << endl;
  return EXIT_SUCCESS;
}