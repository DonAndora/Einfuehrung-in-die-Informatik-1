#include "student.hpp"

#include <sstream>

Student::Student(std::string name, unsigned int matrikelnummer, std::string studiengang) : 
	name(name),  
	matrikelnummer(matrikelnummer),
	studiengang(studiengang)
{}

unsigned int Student::getMatrikelnummer() {
	return this->matrikelnummer;
}

std::string Student::asString() {
	std::stringstream s;

	s   << "Name=\""           << this->name           << "\", "
		<< "Matrikelnummer=\"" << this->matrikelnummer << "\", "
		<< "Studiengang=\""    << this->studiengang    << "\"";

	return s.str();
}
