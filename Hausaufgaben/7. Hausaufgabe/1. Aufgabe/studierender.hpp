/*
 * Klasse, die einen Studierenden repraesentiert
 */
#ifndef STUDIERENDER_HPP
#define STUDIERENDER_HPP

#include <string>

class Studierender
{
public:
	std::string nachname;
	std::string vorname;
	unsigned int matrikelnummer;
	Studierender(std::string nachname, std::string vorname, unsigned int matrikelnummer);
};

#endif
