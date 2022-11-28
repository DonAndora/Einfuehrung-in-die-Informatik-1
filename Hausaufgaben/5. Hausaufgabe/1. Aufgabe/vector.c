#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


char **storage;
unsigned short capacity;

void vector(unsigned short size)
{
	storage = calloc(size, sizeof(char *));
	capacity = size;
	
	if (storage == 0) {
		exit(1);
	}
	for (int i = 0; i <= size - 1; i++) {
		storage[i] = NULL;
	}
}

void push(char *string)
{
	for (int i = 0; i < capacity; i++) {
		if(storage[i] == NULL) {
			storage[i] = string;
			return;
		}
		
	}
		char ** storage_alt;
		capacity *= 2;
		
		storage_alt = calloc(capacity, sizeof(char*));
		
		if (storage_alt == NULL) {
			exit(1);
		}
		for (int i = 0; i < capacity; i++) {
			storage_alt[i] = NULL;
		}
		
		for(int i = 0; i < capacity / 2; i++) {
			storage_alt[i] = storage[i];
		}
		
		storage_alt[(capacity / 2)] = string;
		
		free(storage);
		
		storage = storage_alt;
}

char* at(unsigned short index)
{
	if (index > capacity)
	{
		return NULL;
	}
	else
	{
		return storage[index];
	}
}

void set(unsigned short index, char *string)
{
	if (capacity >= index) {
		storage[index] = string;
	}
}

unsigned short size(void)
{
	unsigned short count = 0;
	for (int i = 0; i < capacity; i++)
	{
		if (storage[i] != NULL)
		{
			count++;
		}
	}
	return count;
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
