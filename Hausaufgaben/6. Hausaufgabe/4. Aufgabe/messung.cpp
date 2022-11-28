#include <iostream>
#include <iomanip> // fuer std::setw(int)
#include <string>
#include <cmath>

/*
 * Print-Funktionen fuer float messwerte[] und std::string orte[] 
 */
namespace printer {
	void printArray(float *messwerte, std::string *orte, int anzahl);
	void printDurchschnitt(float *messwerte, int anzahl);
	void printAbweichung(float *messwerte, int anzahl);

	void printArray(float *messwerte, std::string *orte, int anzahl)
	{
		std::cout << "Alle Messwerte:" << std::endl;
		for(int i = 0; i < anzahl; ++i) {
			std::cout << std::setw(3) << i+1 << ") " << messwerte[i] << " Grad Celsius in " << orte[i] << std::endl;
		}
	}

	void printDurchschnitt(float *messwerte, int anzahl)
	{
		// TODO: Durchschnittstemperatur auf der Konsole ausgeben


	}

	void printAbweichung(float *messwerte, int anzahl)
	{
		// TODO: Abweichung auf der Konsole ausgeben

		
	}

}

using namespace std;

/*
 * Programm zum Speichern von Temperaturmessungen (Wert und Ort)
 * Fragt den Nutzer nach Anzahl der Daten und dann nach den Daten selbst.
 *
 * Zusatzinformationen fuer neugierige Studenten:
 * - std::setw(int n)		
 *		Fuer Breitenangabe in Streams
 * 		(http://en.cppreference.com/w/cpp/io/manip/setw)
 */
int main(void)
{
	cout << "Programm zum Speichern von Temperaturmesswerten und zugehoerigen Orten." << endl;

	int anzahl;
	float *messwerte;
	std::string *orte;

	// Anzahl einlesen
	do {
		cout << "Bitte geben Sie die Anzahl (zwischen 1 und 999) der Messwerte ein: ";
		cin >> anzahl;
		cin.clear();            // setzt den Zustand vom cin-stream zurueck
		cin.ignore(1000, '\n'); // leer den cin-stream
	} while ( !(1 <= anzahl && anzahl <= 999) );

	// TODO: Heapspeicher fuer Messwerte allozieren.
	


	// Messwerte setzen
	cout << "Bitte geben Sie nun abwechselnd die Messwerte (als Kommazahl, z.B. 13.7) und Orte (z.B. Berlin) ein." << endl;
	for (int i = 0; i < anzahl; ++i) {

		cout << setw(3) << i+1 << ") Messwert: ";
		cin >> messwerte[i];

		cout << setw(3) << i+1 << ")      Ort: ";
		cin >> ws; // alle white spaces entfernen
		getline(cin, orte[i]);
	}

	// TODO: Konsolenausgaben durchfuehren
	


	// TODO: Reservierten Speicher freigeben.



	return 0;
}

