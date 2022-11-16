#include <stdio.h>


/**
 * Bekommt ein Array von Zahlen übergeben und dessen Länge.
 * Und sucht nach einem beliebigen Duplikat in dem Array und gibt dessen Wert zurück.
 * Sollte keins gefunden werden, soll -1 zurückgegeben werden.
 *
 * Sie können davon ausgehen, dass -1 nicht als Wert im Array enthalten ist.
 */
int findeDuplikat(int array[], int arrayLength) {
    for (int i = 0; i < arrayLength; ++i) {
        for (int j = i + 1; j < arrayLength; ++j) {
            if (array[i] == array[j]) {
                return array[i];
            }
        }
    }
    return -1;
}

/**
 * Programm, das Duplikate in einem Array findet.
 */
int main(void) {
    int numbers[5] = {2, 1, 3, 5, 1};
    printf("Ein Duplikat ist: %d\n", findeDuplikat(numbers, 5)); // 1 ist ein Duplikat

    int numbers2[5] = {1, 2, 3, 4, 5};
    printf("%d\n", findeDuplikat(numbers2, 5)); // es gibt kein Duplikat (-1, soll ausgegeben werden)
}
