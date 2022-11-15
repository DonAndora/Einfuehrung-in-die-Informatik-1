#include <stdio.h>


/**
 * Bekommt einen beliebigen C-String uebergeben.
 * Und gibt dessen Länge (ohne '\0') zurück
 */
int textlen(char text[]) {
    int len = 0;
    while (text[len] != '\0')
        ++len;
    return len;
}

/**
 * Bekommt einen beliebigen C-String in text uebergeben.
 * Nun wird jeder Buchstabe von text um eine Position nach rechts und der letzte Buchstabe nach ganz vorne vorschoben.
 */
void shiftStringOnce(char text[]) {
}


/**
 * Bekommt einen beliebigen C-String in text uebergeben und eine Zahl shift.
 * Nun wird der text um shift position nach rechts verschoben.
 */
void shiftString(char text[], unsigned int shift) {
}

/**
 * Testprogramm, das Strings um eine beliebige Position shiften kann.
 * Es benutzt dazu die shiftString-Funktion.
 */
int main(void) {
    char str[25] = "Das ist der Originaltext";    // Originaltext

    printf("Original: %s\n", str);
    shiftString(str, 5);
    printf("Verschoben um %d stellen: %s\n", 5, str);
    shiftString(str, 19);
    printf("Nochmal um um %d stellen verschoben: %s\n", 19, str);
}

