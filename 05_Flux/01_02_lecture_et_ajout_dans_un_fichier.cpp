/**
 * \file 01_02_lecture_et_ajout_dans_un_fichier.cpp
 * \version 1.0.0
 * \author Pereira Gabriel
 * \date : 21.10.2024
 * \brief : Code qui lit et sauvegarde du texte dans un fichier
*/

#include <iostream>
#include <fstream>
#include <string>

bool read(const std::string& fichier);
bool write(const std::string& fichier);

int main() {
    char retry;
    do{
        const std::string file_name = "C:/Users/gabri/OneDrive/Documents/HEIG/prg/prg1/05_Flux/test.txt";
        std::cout << "Please enter a file name: ";
        //std::getline(std::cin, file_name);

        read(file_name);
        write(file_name);

        do{
            std::cout << "Do you will retry? (y/n) : ";
            std::cin >> retry;
            std::cout << std::endl;
        } while(retry != 'Y' && retry != 'y' && retry != 'N' && retry != 'n');

    } while(retry != 'N' && retry != 'n');

    return EXIT_SUCCESS;
}

bool read(const std::string& file_name){
    std::ifstream file_in(file_name);

    // Vérifiez si l'ouverture du fichier a réussi
    if (!file_in)
        return false;

    // lire le fichier
    while(file_in){
        std::string line;
        std::getline(file_in, line);
        std::cout << line << "\n";
    }

    file_in.close();
    return true;
}

bool write(const std::string& file_name){
    std::ofstream file_out(file_name, std::ios::app);

    if (!file_out) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier. \n";
        return false;
    }

    //ecrire dans le fichier
    std::string text;
    const std::string finish = "#exit#";
    std::cout << "Entrez le texte à enregistrer dans le fichier (Ctrl+D ou #exit# pour terminer la saisie) :\n";

    while (std::getline(std::cin, text)){
        if(text == finish)
           break;

        file_out << text << std::endl;
    }

    file_out.close();

    std::cout << "Le texte a été enregistré avec succès dans le fichier." << std::endl;
    return true;
}
