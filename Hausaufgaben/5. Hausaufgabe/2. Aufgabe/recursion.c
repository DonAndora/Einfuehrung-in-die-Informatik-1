#include <stdio.h>

int rec1(int var) //rec1 wird mit var aufgerufen
{
    //var wird initalisiert
    var = 3 * (var - 1) + 1;

    if (var > 100) //Wenn var über 100 -> Abbruch
    {
        return var;
    }
    else
    {
        return rec1(var); //Sonst wird die Funktion erneut aufgerufen
    }
}

int rec2(int var, int counter) //rec2 wird mit var und counter aufgerufen
{
	//Wenn ungerade
	if ((var % 2) != 0) { 			
		counter += 1;

        //Wenn var2 größer als 12 -> Abbruch und var wird zurückgegeben
		if (counter > 12) return var; 	
		var = 2 * (var - 1) + 1;
		
		return rec2(var, counter);

	}
    //Wenn gerade
	else { 		
		counter += 1;

        //Wenn var2 größer als 12 -> Abbruch und var wird zurückgegeben
		if (counter > 12) return var; 	
		var = 2 * (var - 1);
		
		return rec2(var, counter); 

	}
}

int main(void)
{
    printf("1. Folgeglied mit Wert ueber 100: %i\n", rec1(9)); //Ausgabe des 1. Folgegeliedes
    printf("12. Folgeglied: %i\n", rec2(5, 0)); //Ausgabe des 12. Folgegeliedes, P.S. Habe noch eine Counter Variable hinzugefügt

    return 0; //... Kein Rückgabewert (void)
}