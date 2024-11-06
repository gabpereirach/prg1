/**
 * \file 01_01_ecriture_dans_un_fichier.cpp
 * \version 1.0.0
 * \author Pereira Gabriel
 * \date : 17.10.2024
 * \brief : Code qui sauvegarde du texte dans un fichier
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string file_name;
    std::cout << "Please enter a file name: ";
    std::getline(std::cin, file_name);

    std::ofstream file_out(file_name, std::ios::app);

    if (!file_out) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier. \n";
        return EXIT_FAILURE;
    }

    std::string text;
    const std::string terminer = "#exit#";
    std::cout << "Entrez le texte à enregistrer dans le fichier (Ctrl+D ou #exit# pour terminer la saisie) :\n";

    while (std::getline(std::cin, text)){
        if(text == terminer) break;

        file_out << text << std::endl;
    }

    file_out.close();

    std::cout << "Le texte a été enregistré avec succès dans le fichier." << std::endl;

    return EXIT_SUCCESS;
}
