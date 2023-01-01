#include <sstream>
#include <iostream>
#include <cstdlib> // srand(), rand()
#include <ctime>   // time()
#include <thread>
#include <chrono>  // sleep

#include "monster.hpp"
#include "vampire.hpp"
#include "imp.hpp"
#include "troll.hpp"
#include "axeThrowerTroll.hpp"

#define NUM_MONSTER   100  // Maximale Anzahl Monster
#define SECONDS_SLEEP   1  // Pause nach einer Aktion in Sekunden

int main(void)
{


	// Vorbereitung
	std::cout << std::endl << "Vorbereitung..." << std::endl;

	std::srand(std::time(0)); // Zufallszahlengenerator initialisieren fuer spaeter

	Monster** monsters = new Monster*[NUM_MONSTER];

	monsters[0] = new Monster("Monstroesitaet", 'A', 36, 1);
	monsters[1] = new Vampire("Vampy", 'B', 4, 2, 0);
	monsters[2] = new Monster("Monsterchen", 'A', 2, 3);
	monsters[3] = new Vampire("Dracularius", 'B', 6, 2, 0);
	monsters[4] = new Troll("Trollopa", 'B', 2, 6, 1);
	monsters[5] = new Troll("Trolline", 'A', 8, 2, 1);
	monsters[6] = new Imp("Wichtelantius", 'C', 2, 4, 1);
	monsters[7] = new AxeThrowerTroll("Berserkerus", 'C', 3, 1, 1, 3);
	monsters[8] = new Imp("Wichtelontias", 'A', 2, 4, 1);
	monsters[9] = new AxeThrowerTroll("Kukundi", 'C', 2, 2, 0, 1);
	for (unsigned short i = 10; i < NUM_MONSTER; ++i) {
		monsters[i] = nullptr;
	}



	// Kaempfen
	std::cout << std::endl << "Moegen die Spiele beginnen..." << std::endl;

	char winner = '\0';
	while(winner == '\0') { // Kaempfen bis ein Gewinner feststeht

		// Jedes Monster ist der Reihe nach dran
		for (unsigned short i = 0; i < NUM_MONSTER; ++i) { 

			if (monsters[i] == nullptr) { // Leere Felder ueberspringen
				continue;
			}

			// Kurz warten fuer den Show-Effekt. Darf auch auskommentiert werden.
			std::this_thread::sleep_for(std::chrono::seconds(SECONDS_SLEEP)); 


			// Entscheiden, ob angreifen oder Verbuendetem helfen
			bool doAttack = std::rand() % 2;

			if (doAttack == true) {

				// Erstbesten Gegner suchen
				Monster* enemy = nullptr;
				for (unsigned short o = 0; o < NUM_MONSTER; ++o) {
					if (monsters[o] == nullptr) { // Leere Felder ueberspringen
						continue;
					}
					// i: Idx aktives Monster, o: Idx Vergleichsmonster
					if (monsters[o]->team != monsters[i]->team) { 
						enemy = monsters[o];
						monsters[i]->attack(enemy);
						if (enemy->health <= 0) {
							std::cout << enemy->name << " ist am Ende seiner Kraefte. ";
							delete enemy;
							monsters[o] = nullptr;
						}
						break; // Angriff fertig
					}
				}
				// Schauen, ob es einen Gegner gab - wenn nicht haben wir gewonnen
				if (enemy == nullptr) {
					std::cout << monsters[i]->name << " moechte angreifen, findet aber keinen Gegner mehr." << std::endl;
					winner = monsters[i]->team;
					break;
				}

			} else { // if doAttack == false

				// Erstbesten Verbuendeten suchen
				Monster* ally = nullptr;
				for (unsigned short o = 0; o < NUM_MONSTER; ++o) {
					if (monsters[o] == nullptr) { // Leere Felder ueberspringen
						continue;
					}
					// i: Idx aktives Monster, o: Idx Vergleichsmonster
					if (monsters[o]->team == monsters[i]->team && o != i) { 
						ally = monsters[o];
						monsters[i]->support(ally);
						break; // Unterstuetzen fetig
					}
				}
				// Schauen, ob es einen Verbuendeten gab - wenn nicht verzweifelt gucken
				if (ally == nullptr) {
					std::cout << monsters[i]->name << " sieht keinen Verbuendeten mehr und ist am verzweifeln." << std::endl; 
				}

			}
			
		}

	}


	// Kampfauswertung 
	std::cout << std::endl << "Es gewinnt das Team " << winner << "." << std::endl;
	std::cout << "Sieger:" << std::endl;
	for (unsigned short i = 0; i < NUM_MONSTER; ++i) {
		if (monsters[i] == nullptr) { // Leere Felder ueberspringen
			continue;
		}
		std::cout << monsters[i]->asString() << std::endl;
	}


	// Nachbereitung
	std::cout << std::endl << "Rest aufraeumen..." << std::endl;
	for (unsigned short i = 0; i < NUM_MONSTER; ++i) {
		if (monsters[i] == nullptr) {
			continue;
		}
		delete monsters[i];
		monsters[i] = nullptr;
	}
	delete[] monsters;
	monsters = nullptr;

}
