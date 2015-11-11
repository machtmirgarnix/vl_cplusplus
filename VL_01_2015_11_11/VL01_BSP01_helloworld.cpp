// Dies ist ein Kommentar!

/*
 Dies ist ein Block-Kommentar !
*/

// Präprozessor - Anweisung, Header-Dateien einbinden !
// Achtung: kein Semikolon am Ende !
#include <iostream>

// Namespaces --- erstmal im Hinterkopf behalten
using namespace std;

// Hauptroutine - heisst in jedem ausführbaren C++-Programm so ! (Konvention)
// Gibt eine ganze Zahl (integer) zurück !
int main(){
    // Output-Stream (definiert in der iostream-Bibliothek)
    cout << "Hallo ihr Freaks !!" << " Wir sind heute " << 9 << " Personen in diesem Raum!" << endl;

    // exit-code - Rückgabewert an das Betriebssystem. 0 heisst: "Alles Ok!"
    return 0;
}
