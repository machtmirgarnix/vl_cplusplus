// Dies ist ein Kommentar!

/*
 Dies ist ein Block-Kommentar !
*/

// Präprozessor - Anweisung, Header-dateien einbinden !
// Achtung: kein Semikolon am Ende !
#include <iostream>

// Namespaces --- erstmal im Hinterkopf behalten
using namespace std;

// Hauptroutine - heisst in jedem Ausführbaren C++-Programm so ! (Konvention)
// gibt eine ganze Zahl (integer) zurück !
int main(){
    // Deklaration und Initialisierung einer Variable
    int freaks = 0;

    // endl ist ein Zeilenumbruch
    cout << "Wieviele Personen sind in diesem Raum ?" << endl;

    // Input-Stream - fordert zu einer Eingabe (auf der Konsole) auf ...
    cin >> freaks;

    // Basic Input-Output von der Konsole
    cout << "Es sind " << freaks << " Freaks anwesend!" << endl;

    // exit-code - Rückgabewert an das Betriebssystem - 0 heisst: "Alles Ok!"
    return 0;
}
