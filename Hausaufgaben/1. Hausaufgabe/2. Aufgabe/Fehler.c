#include <stdio.h>

int main()
{
	printf("Hallo\n");
	int erste_zahl = 50;  // ";" hat gefehlt!
	int zweite_zahl = 60; //"_" hat gefehlt!
	int dritte_zahl = 70;
	
	printf("Die Zahlen sind: %d %d %d \n", 
		erste_zahl, zweite_zahl, dritte_zahl);
	
	char erstes_zeichen = 'U'; // "=" hat gefehlt!
	char zweites_zeichen = 'V';
	char drittes_zeichen = 'W'; // "char" hat gefehlt!
	printf("Die Zeichen sind: %c %c %c \n", 
		erstes_zeichen, zweites_zeichen, drittes_zeichen);
}


/*

Original Code:

int main()
{
	printf("Hallo\n");
	int erste_zahl = 50  
	int zweitezahl = 60; 
	int dritte_zahl = 70;
	
	printf("Die Zahlen sind: %d %d %d \n", 
		erste_zahl, zweite_zahl, dritte_zahl);
	
	char erstes_zeichen  'U'; 
	char zweites_zeichen = 'V';
	drittes_zeichen = 'W'; 
	printf("Die Zeichen sind: %c %c %c \n", 
		erstes_zeichen, zweites_zeichen, drittes_zeichen);
}

*/