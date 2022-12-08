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

	// Ihr Code hier ....
}
