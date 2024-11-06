//
// Created by gabri on 03.10.2024.
//

#include <iostream>
#include <cstdlib>
using namespace std;

void permutation(int& gab, int& gw, int& gae){
    int i = gab;
    gab = gae;
    gae = gw;
    gw = i;
}

int main() {
    int gabriel = 1;
    int gwen = 10;
    int gael = 100;

    permutation(gabriel, gwen, gael);
    cout << "gabriel: " << gabriel << endl;
    cout << "gwen: " << gwen << endl;
    cout << "gael: " << gael << endl;
    return EXIT_SUCCESS;
}