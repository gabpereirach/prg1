# 1er code C++

Dans le code ci-dessous, à quoi servent les différentes parties numérotées
~~~cpp
#include <iostream>                         // 1
#include <cstdlib>
using namespace std;                        // 2

int main()                                  // 3
{                                           // 4
    cout << "Hello world"       << endl;    // 5
    cout << "fin de programme"  << endl;
    return EXIT_SUCCESS;                    // 6
}                                           // 4
~~~
1. c'est pour importer les différentes librairy:
   - iostream : pour use cout, cin et end 
   - cstdlib : EXIT_SUCESS
2. c'est pour eviter de devoir écrire std::cout
3. par defaut la première fonction pointer est main et c'est celui utiliser pour tt ce programme
4. {} c'est le corps de la fonction main
5. cout affiche du contenu dans le terminal
6. return c'ets ce qui va être retourné à la fonction main et là c'est une fonction sans probleme

<details>
<summary>Solution</summary>

1. Ajouter des librairies utiles au programme
    - *iostream*  : pour *cout*, *cin*, ...
    - *cstdlib*   : pour *EXIT_SUCCESS*
2. Utilise l'espace de nommage *std*. Sans quoi, il faudrait écrire
    - *std::cout*
    - *std::endl*
3. *main* est le nom de la fonction principale (obligatoire)
    - n'a pas de paramêtre () /!\ *main(void)* serait faux (du C)
    - retourne un code d'erreur en entier
4. *{ ... }* bloc de la fonction contenant les instructions
5. Les instructions, toutes se terminent par un ";"
6. Code d'erreur en fin de fonction.

   **NB**: pas obligatoire pour la fonction "main"

</details>
