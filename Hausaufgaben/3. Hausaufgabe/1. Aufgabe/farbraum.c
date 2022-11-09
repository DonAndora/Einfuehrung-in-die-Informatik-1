#include <stdio.h>

void color(double code) 
{
    //Diese Funktion findet aus dem eingegebenen Winkel den passenden Farbtypen. 
    //Dabei wird überprüft, ob der eingegebene Winkel in den Bereich des Rot-, Grün-, Blau-, Gelb-, Cyan-, Magenta- oder Weißbereichs fällt.
    //Wenn ja, wird die Farbe ausgegeben!

    if (code >= 0 && code < 30 || code >= 330 && code <=360)
    {
        printf("Rot");
    }
    else if (code >= 30 && code < 90)
    {
        printf("Gelb");
    }
    else if (code >= 90 && code < 150)
    {
        printf("Grün");
    }
    else if (code >= 150 && code < 210)
    {
        printf("Cyan");
    }
    else if (code >= 210 && code < 270)
    {
        printf("Blau");
    }
    else if (code >= 270 && code < 330)
    {
        printf("Magenta");
    }
}

int main (void) //Hab jetzt hier mal nen Void mitgegeben...
{
    double code; //Die Variable "code" wird als double definiert, da der eingegebene Winkel auch Nachkommastellen haben kann.
    printf("\nBitte geben Sie den Winkel ein: "); //Der Benutzer wird aufgefordert, den Winkel einzugeben.
    scanf("%lf", &code); //Der eingegebene Winkel wird in der Variable "code" gespeichert.

    if (code < 0 || code > 360) //Wenn der eingegebene Winkel kleiner als 0 oder größer als 360 Grad ist, wird eine Fehlermeldung ausgegeben.
    {
        printf("%lf ist ein ungültiger Winkel!", code); //Fehlermedlung
    }
    else
    {
        printf("\nDie Farbe zum Winkel %lf ist ", code); //Der eingegebene Winkel wird ausgegeben.

        color(code); //Die Funktion "color" wird aufgerufen.
    }   //Man kann die Funktion auch direkt im Print aufrufen, dürfte Sie dann allerdings nicht als "void" definieren.
        //Zudem muss man der Funktion dann auch noch einen "return" Wert mitgeben.
    return 0;
    
}