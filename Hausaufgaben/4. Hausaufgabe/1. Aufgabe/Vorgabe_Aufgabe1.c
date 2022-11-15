#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {
    srand(time(0));

    // Array fuer Zufallszahlen anlegen
    int zufallszahlen[100];


    // Zufallszahlen erzeugen
    for (int i = 0; i < 100; i++) {
        zufallszahlen[i] = rand() % 100;
    }


    // Ausgabe des Arrays
    for (int i = 0; i < 100; i++) {
        printf("%d ", zufallszahlen[i]);
    }
}
