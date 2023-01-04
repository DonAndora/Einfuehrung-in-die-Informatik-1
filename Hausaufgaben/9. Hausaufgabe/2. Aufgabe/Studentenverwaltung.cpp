#include "Student.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<Student *> students;
    stringstream ss;

    char insert;
    ss << "\n"
       << "e: Das Program beenden\n"
       << "a: Ein Student hinzufuegen\n"
       << "s: Student ueber Matrikelnummer suchen\n"
       << "d: Student aus Liste loeschen\n"
       << "l: Alle Studenten auflisten\n";

    while(true) 
    {
        std::cout << ss.str();
        std::cout << "Bitte geben Sie ein Befehl: ";
        std::cin >> insert;
        std::cin.clear();
        std::cin.ignore(1000, '\n');

        switch (insert) {
        case 'e':
            std::cout << "Das Programm wird beendet." << std::endl;
            exit(true);
        case 'a': {
            std::string name;
            unsigned int matrikelnummer;
            std::string studiengang;

            std::cout << "Ein/e Student/in wird jetzt hinzugefuegt" << std::endl;
            std::cout << "Geben Sie den Name ein: ";
            std::cin >> name;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Geben Sie die Matrikelnummer ein: ";
            std::cin >> matrikelnummer;
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Geben Sie den Studiengang ein: ";
            std::cin >> studiengang;
            std::cin.clear();
            std::cin.ignore(1000, '\n');

            Student *tempStudent = new Student(name, matrikelnummer, studiengang);
            students.push_back(tempStudent);
            break;
        }
        case 's': {
            int matrikelnummer;
            std::cout << "Student in Studentenlist wird gesucht..." << std::endl;
            std::cout << "Geben Sie die Matrikelnummer ein: ";
            std::cin >> matrikelnummer;
            std::cin.clear();
            std::cin.ignore(1000, '\n');

            std::vector<Student *>::iterator it;
            bool gefunden = false;
            for (it = students.begin(); it != students.end(); ++it) {
                gefunden = (matrikelnummer == (*it)->getMatrikelnummer());
                if (gefunden) {
                    std::cout << (*it)->asString();
                    break;
                }
            }
            if (!gefunden) {
                std::cout << "\nKeine passende Matrikelnummer gefunden!" << std::endl;
            }
            break;
        }
        case 'd': {
            int matrikelnummer;
            std::cout << "Student wird aus Studentenlist geloescht..." << std::endl;
            std::cout << "Geben Sie die Matrikelnummer: ";
            std::cin >> matrikelnummer;
            std::cin.clear();
            std::cin.ignore(1000, '\n');

            std::vector<Student *>::iterator it;
            bool gefunden = false;
            for (it = students.begin(); it != students.end(); ++it) {
                gefunden = (matrikelnummer == (*it)->getMatrikelnummer());
                if (gefunden) {
                    std::cout << (*it)->asString() << "wird geloescht!" << std::endl;
                    delete *it;
                    students.erase(it);
                    break;
                }
            }
            if (!gefunden) {
                std::cout << "\nKeine passende Matrikelnummer gefunden!" << std::endl;
            }
            break;
        }
        case 'l': {
            std::vector<Student *>::iterator it;
            for (it = students.begin(); it != students.end(); ++it) {
                std::cout << (*it)->asString() << std::endl;
            }
            break;
        }
        default:
            std::cout << "\nUngueltige Eingabe." << std::endl;
            break;
        }
    }

    return 0;
}