/*
 * Studierendenverwaltung
 */
#include <iostream>
#include "studierender.hpp"

int main()
{

	// festlegen, wie viele Studierende verwaltet werden sollen
	int n = 0;
	do {
		std::cout << "Bitte geben Sie die Anzahl der Studierenden ein: ";
		std::cin >> n;

		// Stream-Status zuruecksetzen und bis zu 420 Zeichen leeren,
		// falls der User unpassendes oder zu viel eingegeben hat.
		std::cin.clear();
		std::cin.ignore(420, '\n');
	} while (n <= 0);

	// array deklarieren, dass gross genug ist fuer alle Studierenden
	// Studierender* Pointer auf ein Studierendenobjekt auf dem Heap-Speicher,
	// Studierender** Pointer auf einen Pointer auf ein Studierendenobjekt auf
	// dem Heap-Speicher (Also auf das erste Array-Objekt)
	Studierender** studierende;
	studierende = new Studierender*[n];

	// Studierende einlesen
	for (int i = 0; i < n; i++) {
		std::string vorname;
		std::string nachname;
		unsigned int matrikelnummer;

		std::cout << "Bitte geben Sie den Vornamen des " << i + 1 << ". Studierenden ein: ";
		std::cin >> vorname;
		std::cout << "Bitte geben Sie den Nachnamen des " << i + 1 << ". Studierenden ein: ";
		std::cin >> nachname;
		std::cout << "Bitte geben Sie die Matrikelnummer des " << i + 1 << ". Studierenden ein: ";
		std::cin >> matrikelnummer;

		// Stream-Status zurücksetzen und bis zu 420 Zeichen leeren
		std::cin.clear();
		std::cin.ignore(420, '\n');

		// Studierenden auf dem Heap Speicher erzeugen
		studierende[i] = new Studierender(nachname, vorname, matrikelnummer);

		std::cout << std::endl;
	}
	
	// Studierende ausgeben
	for (int i = 0; i < n; ++i) {
        std::cout << " " << std::endl;
		std::cout << "Vorname: " << studierende[i]->vorname << std::endl;
        std::cout << "Nachname: " << studierende[i]->nachname << std::endl;
        std::cout << "Matrikelnummer: " << studierende[i]->matrikelnummer << std::endl;
    }

	// Speicher freigeben
    for (int i = 0; i < n; ++i) {
        delete studierende[i];
    }
}
