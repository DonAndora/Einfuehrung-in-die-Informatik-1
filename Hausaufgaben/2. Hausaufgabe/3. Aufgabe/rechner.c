#include <stdio.h>

//Jeder Funktion werden die gleichen Werte gegeben, siehe Z. 40 - 42, geben allerdings je nach Operation andere Werte zurück.

int addieren(int var_1, int var_2) //Funktion zum addieren definiert.
{
    return var_1 + var_2;
}

int mal(int var_1,int var_2) //Funktion zum multiplizieren definiert.
{
    return var_1 * var_2;
}

int modulo(int var_1,int var_2) //Funktion zum modulo definiert.
{
    return var_1 % var_2;
}

//Alle Funktionen stehen über der Mainfunktion, da GCC sonst wieder rumheult...


int main(int argc, char** argv) //Main Funktion...
{
    printf("\n--------------------------------------------------------------\n"); //Diese Zeile hat keinen nutzen!
    // Erster Durchlauf!
    int var_1 = 5, var_2 = 16; //2 Variablen werden als Integar definiert.

    printf("\nErste Zahl: %d\n", var_1);

    printf("Zweite Zahl: %d", var_2); 

    ///printf("\n\n--------------------------------------------------------------\n"); //Diese Zeile hat keinen nutzen!

    printf("\n\n1. Addieren: Ergebnis aus %d + %d = %d", var_1, var_2, addieren(var_1, var_2)); //
    printf("\n2. Multiplizieren: Ergebnis aus %d * %d = %d", var_1, var_2, mal(var_1, var_2)); //
    printf("\n3. Modulo: Ergebnis aus %d %% %d = %d\n", var_1, var_2, modulo(var_1, var_2)); //

    printf("\n--------------------------------------------------------------\n"); //Diese Zeile hat keinen nutzen!

    // Zweiter Durchlauf!
    var_1 = 8, var_2 = 7; //2 Variablen werden als Integar definiert.

    printf("\nErste Zahl: %d\n", var_1);

    printf("Zweite Zahl: %d", var_2); 

    //printf("\n\n--------------------------------------------------------------\n"); //Diese Zeile hat keinen nutzen!

    printf("\n\n1. Addieren: Ergebnis aus %d + %d = %d", var_1, var_2, addieren(var_1, var_2)); //
    printf("\n2. Multiplizieren: Ergebnis aus %d * %d = %d", var_1, var_2, mal(var_1, var_2)); //
    printf("\n3. Modulo: Ergebnis aus %d %% %d = %d\n", var_1, var_2, modulo(var_1, var_2)); //

    printf("\n--------------------------------------------------------------\n"); //Diese Zeile hat keinen nutzen!

    return 0; //Main hat keinen Rückgabewert!
}

