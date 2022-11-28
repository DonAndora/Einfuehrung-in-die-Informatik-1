#include <stdio.h>

int main(void)
{
	printf("--- Programm zur Multiplikation zweier Zahlen ---\n");

    double factor1;
    double factor2;
    printf("Bitte gib den ersten Faktor ein: ");
    scanf("%lf", &factor1);
    printf("Bitte gib den zweiten Faktor ein: ");
    scanf("%lf", &factor2);
    printf("Das Produkt ist %g\n", factor1 * factor2);
    
    return 0;
}