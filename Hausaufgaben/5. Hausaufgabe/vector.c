#include <stdio.h>
#include <stdlib.h>

char **storage;
unsigned short capacity;

void vector(unsigned short size)
{
	// ... Hier Ihr Code ...
}

void push(char *string)
{
	// ... Hier Ihr Code ...
}

char* at(unsigned short index)
{
	// ... Hier Ihr Code ...
}

void set(unsigned short index, char *string)
{
	// ... Hier Ihr Code ...
}

unsigned short size(void)
{
	// ... Hier Ihr Code ...
}

int main(void)
{
	// Erzeuge Test-Vector 
	vector(3);
	
	// Fuege 4 Strings hinten an
	push("Anton");
	push("Berta");
	push("Caesar");
	push("schon");
	push("aus");
	
	// setze erste 3 Elemente
	set(0, "Das");
	set(1, "sieht");
	set(2, "Dora");

	// setze ein ungueltiges Element
	set(100, "Friedrich");

	// loesche zweites und viertes Element
	set(2, 0);
	set(4, 0);

	// speichere neue Elemente
	push("doch");
	push("sehr");
	push("gut");
	push("aus");
	push(":)");
	
	// Gebe Test-Vektor aus
	for (int i = 0; i < capacity; ++i){
		printf("%s ", at(i));
	}
	printf("\nInsgesamt %hu Eintraege.\n", size());
}
