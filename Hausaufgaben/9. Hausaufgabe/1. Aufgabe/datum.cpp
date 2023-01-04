#include <iostream>
#include <string>

// Abstrakte Klasse Datum
class Datum {
private:
    int tag, monat, jahr;

public:
    // Parametrisierter Konstruktor
    Datum(int tag, int monat, int jahr) : tag(tag), monat(monat), jahr(jahr) {
        if (tag <= 0 || monat <= 0 || tag > 31 || monat > 12) {
            std::cout << "Warnung: Ungültiges Datum!" << std::endl;
        }
    }

    // Getter-Methoden
    std::string getTT() {
        return tag < 10 ? "0" + std::to_string(tag) : std::to_string(tag);
    }
    std::string getMM() {
        return monat < 10 ? "0" + std::to_string(monat) : std::to_string(monat);
    }
    std::string getJahr() {
        return std::to_string(jahr);
    }

    // Abstrakte Methode, die in den von Datum abgeleiteten Klassen implementiert wird
    virtual std::string formatiere() = 0;
};

// Klasse DatumISO, die von Datum abgeleitet ist
class DatumISO : public Datum {
public:
    // Konstruktor, der den Konstruktor der Superklasse aufruft
    DatumISO(int tag, int monat, int jahr) : Datum(tag, monat, jahr) {}

    // Implementierung der abstrakten Methode formatiere
    std::string formatiere() {
        return getJahr() + "." + getMM() + "." + getTT();
    }
};

// Klasse DatumDE, die von Datum abgeleitet ist
class DatumDE : public Datum {
public:
    // Konstruktor, der den Konstruktor der Superklasse aufruft
    DatumDE(int tag, int monat, int jahr) : Datum(tag, monat, jahr) {}

    // Implementierung der abstrakten Methode formatiere
    std::string formatiere() {
        return getTT() + "." + getMM() + "." + getJahr();
    }
};

// Klasse DatumUSA, die von Datum abgeleitet ist
class DatumUSA : public Datum {
public:
    // Konstruktor, der den Konstruktor der Superklasse aufruft
    DatumUSA(int tag, int monat, int jahr) : Datum(tag, monat, jahr) {}

    // Implementierung der abstrakten Methode formatiere
    std::string formatiere() {
        return getMM() + "." + getTT() + "." + getJahr();
    }
};

int main() {
    std::cout << "Erzeuge Objekte und gebe korrektes Datum in den drei Formaten aus:" << std::endl;
    DatumDE dateDE(1, 12, 2021);
    std::cout << "Deutsche Formatierung: " << dateDE.formatiere() << std::endl;
    DatumUSA dateUSA(1, 12, 2021);
    std::cout << "Amerikanische Formatierung: " << dateUSA.formatiere() << std::endl;
    DatumISO dateISO(1, 12, 2021);
    std::cout << "ISO-Formatierung: " << dateISO.formatiere() << std::endl;

    std::cout << "Erzeuge Objekte und gebe falsches Datum in den drei Formaten aus:" << std::endl;
    DatumDE dateDE_falsch(4, 20, 2021);
    std::cout << "Deutsche Formatierung: " << dateDE_falsch.formatiere() << std::endl;
    DatumUSA dateUSA_falsch(4, 20, 2021);
    std::cout << "Amerikanische Formatierung: " << dateUSA_falsch.formatiere() << std::endl;
    DatumISO dateISO_falsch(4, 20, 2021);
    std::cout << "ISO-Formatierung: " << dateISO_falsch.formatiere() << std::endl;

    return 0;
}