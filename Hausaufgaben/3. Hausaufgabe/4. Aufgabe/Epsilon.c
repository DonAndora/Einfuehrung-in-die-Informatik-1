#include <stdio.h>

int main (void)
{
    float eps = 1.0f; //Variable eps als float deklarieren und initialisieren mit dem Wert 1.0
    while (1.0 + eps != 1.0) //Solange 1.0 + eps ungleich 1.0 ist, wird eps halbiert.
    {
        eps = eps / 2.0;
    }
    printf("Eps: %f\n", eps); //Sobald 1.0 + eps gleich 1.0 ist, wird eps ausgegeben.

    return 0;
}