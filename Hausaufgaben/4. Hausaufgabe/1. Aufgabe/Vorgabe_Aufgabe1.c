#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    srand(time(0));

    // Array fuer 20 Zufallszahlen anlegen
    int zufallszahlen[20];


    // Zufallszahlen zwischen 0 und 100 erzeugen
    for (int i = 0; i < 20; i++) {
        zufallszahlen[i] = rand() % 101;
    }


    // Ausgabe des Arrays
    for (int i = 0; i < 20; i++) {
        printf("%d ", zufallszahlen[i]);
    }
}
