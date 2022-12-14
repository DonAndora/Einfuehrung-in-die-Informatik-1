/*
 * Hauptprogramm, welches unsere Haustier-Klasse enthaelt
 */

#include <iostream>
#include <string>

class Haustier
{
public:
	std::string name;
	int alter;
	bool istSaeugetier;
};

int main(void)
{
	// Erstelle ein Haustier "weissbauchigel" mit den Eigenschaften aus der Tabelle
	Haustier weissbauchigel;
    weissbauchigel.name = "Isolde";
    weissbauchigel.alter = 9;
    weissbauchigel.istSaeugetier = true;

	// Erstelle ein Haustier "chinchilla" mit den Eigenschaften aus der Tabelle
    Haustier chinchilla;
    chinchilla.name = "Chili";
    chinchilla.alter = 4;
	chinchilla.alter += 1; // In der Aufgabenstellung stand "chinchilla wird 1 Jahr aelter?"
    chinchilla.istSaeugetier = true;

	// Gib die Eigenschaften der beiden Haustiere aus...
    std::cout << "Der Weissbauchigel ist " << weissbauchigel.alter << " Jahre alt und heisst " << weissbauchigel.name << "." << std::endl;
    std::cout << "Der Chinchilla ist " << chinchilla.alter << " Jahre alt und heisst " << chinchilla.name << "." << std::endl;

	return 0;
}
