#include <stdio.h>

int main (void)
{
    float wirkstoffgehalt = 100; //Ausgangswert in Prozent
    int monate = 0; //Zähler für Monate

    while (wirkstoffgehalt >= 50) //Zählerfunktion, solange der Wirkstoffgehalt größer gleich 50 ist. Danach wird die Schleife verlassen.
    {
        printf("Monat: %d Wirkstoffgehalt: %f\n", monate, wirkstoffgehalt);
        wirkstoffgehalt = wirkstoffgehalt * 0.96;
        monate++;
    }
    printf("Monat: %d Wirkstoffgehalt: %f ABGELAUFEN\n", monate, wirkstoffgehalt); //Ausgabe für den letzten Monat, da der Wirkstoffgehalt kleiner als 50 ist.


    return 0;
}