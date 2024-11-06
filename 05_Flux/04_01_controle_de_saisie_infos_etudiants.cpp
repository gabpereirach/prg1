#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

void afficher_ligne(const string &s_col1,
					const string &s_col2,
					const string &s_col3,
					const string &s_col4,
					const string &s_col5) {
	ios backup(nullptr);
	backup.copyfmt(cout); // enregistrer le formatage actuel

	const int w_col1 = 15;
	const int w_col2 = 6;
	const int w_col3 = 11;
	const int w_col4 = 14;
	const int w_col5 = 9;
	const int w_total = w_col1 + w_col2 + w_col3 + w_col4 + w_col5;

	cout << left << setw(w_col1) << s_col1
			<< right << setw(w_col2) << s_col2
			<< right << setw(w_col3) << s_col3
			<< right << setw(w_col4) << s_col4
			<< right << setw(w_col5) << s_col5
			<< endl;

	cout << right << setw(w_total) << setfill('-') << "" << "\n";

	cout.copyfmt(backup); // restaurer le formatage précédent
}

void afficher_resume(double moyenne, bool admis) {
	cout << "Moyenne : " << moyenne << endl;

	cout << "Résultat : " << (admis ? "Admis" : "Non admis") << endl;
}

string lire_string(const string &message) {
	cout << message;
	string s;
	getline(cin, s);
	return s;
}

int lire_int(const string &message, const int &age_min, const int &age_max) {
	cout << message;
	int i;
	bool valide;
	do {
		valide = (cin >> i) && i >= age_min && i <= age_max;
		if (!valide) {
			cin.clear();
			cout << "Saisie invalide. Veuillez entrer un entier entre " << age_min << " et " << age_max << "\n";
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (!valide);
	return i;
}

double lire_double(const string &message, const double &note_min, const double &note_max) {
	cout << message;
	double d;
	bool valide;
	do {
		valide = (cin >> d) && d >= note_min && d <= note_max;
		if(!valide) {
			cin.clear();
			cout << "Saisie invalide. Veuillez entrer un entier entre " << note_min << " et " << note_max << "\n";
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	} while (!valide);
	}
	cin >> d;
	return d;
}

double calculer_moyenne(double note_math, double note_prg1) {
	return (note_math + note_prg1) / 2.0;
}

bool est_admis(double moyenne) {
	const double min_admis = 3.8;
	return (moyenne >= min_admis);
}

string double_to_str(double value) {
	stringstream out_str;
	out_str << value;
	return out_str.str();
}

int main() {
	const int age_min = 1;
	const int age_max = 100;
	const int note_min = 1;
	const int note_max = 6;

	string nom = lire_string("Entrez le nom de l'étudiant : ");;
	int age = lire_int("Entrez l'âge de l'étudiant : ", age_min, age_max);
	double note_math = lire_double("Entrez la note en mathématiques (max. 6): ", note_min, note_max);
	double note_prg1 = lire_double("Entrez la note en PRG1 (max. 6): ", note_min, note_max);
	double moyenne = calculer_moyenne(note_math, note_prg1);
	bool admis = est_admis(moyenne);

	afficher_ligne("Nom", "Age", "Note Math", "Note PRG1", "Admis");
	afficher_ligne(nom, to_string(age), double_to_str(note_math), double_to_str(note_prg1), admis ? "Oui" : "Non");
	afficher_resume(moyenne, admis);

	return 0;
}
