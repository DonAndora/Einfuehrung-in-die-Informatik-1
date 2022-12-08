#include "studierender.hpp"
#include <iostream>

using namespace std;

int main() {

    Studierender *studierender_heap = new Studierender("Mustermann", "Max", 1457);
    Studierender studierender_stack("Weber", "Klaus", 274);

    cout << "Studierender auf dem Heap:" << endl;
    cout << "Nachname: " << studierender_heap->nachname << endl;
    cout << "Vorname: " << studierender_heap->vorname << endl;
    cout << "Matrikelnummer: " << studierender_heap->matrikelnummer << endl;

    cout << "Studierender auf dem Stack:" << endl;
    cout << "Nachname: " << studierender_stack.nachname << endl;
    cout << "Vorname: " << studierender_stack.vorname << endl;
    cout << "Matrikelnummer: " << studierender_stack.matrikelnummer << endl;

    delete studierender_heap;

    return 0;
}