//
// Created by gabri on 03.10.2024.
//

#include <iostream>
using namespace std;
bool is_bissextile(int annee){
    return (annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0;
}

int main() {
   int annee;
   for (int i=1; i < 5; ++i){
       cout << "Enter the annee: ";
       cin >> annee;
       cout << endl;

       cout << "L'année " << annee;
       if (is_bissextile(annee) == true){
            cout << " est ";
       }else{
            cout << " n'est pas ";
       }
       cout << "bissextile" << endl;
   }

  return EXIT_SUCCESS;
}