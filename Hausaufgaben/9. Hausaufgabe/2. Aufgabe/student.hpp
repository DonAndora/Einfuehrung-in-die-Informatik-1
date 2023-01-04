#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
private:
	std::string   name;
	unsigned int  matrikelnummer;
	std::string   studiengang;
public:
	Student(std::string, unsigned int, std::string);
	unsigned int  getMatrikelnummer();
	std::string   asString();
};

#endif
