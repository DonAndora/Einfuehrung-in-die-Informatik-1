#include <stdio.h>

#define KM_TO_MILES(km) /*HIER CODE EINFUEGEN*/


#define LINE(c) /*HIER CODE EINFUEGEN*/


#define MOD2(zahl) /*HIER CODE EINFUEGEN*/


int main()
{
	printf("Der Erdumfang betraegt rund %.2f Meilen.\n", KM_TO_MILES(40074));
	LINE('-');

	int zahl = 255;
	printf("%d mod 2 ist %d.\n", zahl,   MOD2(zahl));
	printf("%d mod 2 ist %d.\n", zahl+1, MOD2(zahl+1));
	printf("%d mod 2 ist %d.\n", zahl+2, MOD2(zahl+2));
	printf("%d mod 2 ist %d.\n", zahl+3, MOD2(zahl+3));
	LINE('-');

}
