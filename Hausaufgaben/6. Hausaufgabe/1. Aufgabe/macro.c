#include <stdio.h>

#define KM_TO_MILES(km) (km * 0.621371192)


#define LINE(c)	for (int i = 0; i < 10; i++) \
				{ \
					printf("%c", c); \
				} \
				printf("\n");


#define MOD2(zahl) ((zahl) % 2)


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
