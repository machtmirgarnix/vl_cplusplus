# 1. Übungsblatt
## Aufgabe 0 - Programmierumgebung
Richtet euch eine funktionierende Arbeitsumgebung ein !

## Aufgabe 1 - Finde den Fehler !
### 1.1
```c++
#include <iosream>
using namespace std;

int main(){

  int personen = 15;
  cout << "Es sind " << personen <<  " Personen anwesend !" << endl;

  return 0;
}
```

### 1.2
```c++
#include <iostream>

int main(){

  int personen = 15;
  cout << "Es sind << personen <<  Personen anwesend !" << endl;

  return 0;
}
```

### 1.3
```c++
#include <iostream>
using namespace std;

int main(){

  int personen = 15;

  if (personen > 14) {
    cout << "Der Raum ist zu voll!" << endl;
  } else (personen < 1)
      cout "Wo sind denn alle hin ??"

  return 0;
}
```

### 1.4
```c++
#include <iostream>
using namespace std;

/*
Anmerkung:

Bei mehr als 4 Musikern soll das Programm darauf hinweisen,
das da wohl jemand zuviel ist.

Bei weniger als 4 Musikern soll das Programm darauf hinweisen,
das da wohl jemand fehlt!

Warum funktioniert das hier nicht ?

*/


int main(){

  int anzahl_musiker = 0;

  cout << "Ist das Quartett denn vollständig? Wieviele Musiker sind im Raum?";

  // Abfrage Anzahl Musiker
  cin >> anzahl_musiker;

  if (anzahl_musiker = 4) {
    cout << "Das Quartett ist vollständig" << endl;
  } else if (anzahl_musiker < 4){
    cout << "Da fehlt doch noch wer!" << endl;
  } else {
    cout << "Das sind aber zu viele!" << endl;
  }


  return 0;
}
```

## Aufgabe 2 - Zufallsmelodiegenerator
### Vorkenntnisse
Für diese Aufgabe braucht es ein paar Vorkenntnisse !
#### Arrays in C++
```c++
// So definiert man ein Array ganzer Zahlen in c++:
int integer_array[5];

// Am besten, man initalisiert es auch gleich !

int integer_array[5] = {4, 5, 6, 1, 4};

// Alternative Schreibweise (ab C++11-Standard)
// int integer_array[5] = {4, 5, 6, 1, 4};

// bei anderen Datentypen geht das genauso !

// Ein Element des Arrays kann wie folgt genutzt werden:
cout << integer_array[3]; // gibt das 3. Element aus !
```
Lest euch am besten nochmal den [Artikel im Tutorial](http://www.cplusplus.com/doc/tutorial/arrays/) durch !

#### Strings in C++
```c++
// Datentyp für Strings:
string note = "C#";
cout << note;
```
ACHTUNG: Strings werden immer mit DOPPELTEN Anführungszeichen markiert,
einzelne Buchstaben (Datentyp *char*) mit EINZELNEN Anführungszeichen!

#### Zusatz zu Schleifen
```c++
// über das Statement 'break' zwingt man das Programm, aus der Schleife zu springen
while(true){
  break;
}
```

#### (Pseudo-) Zufallszahlen in C++
In der Bibliothek *cstdlib* gibt es die Funktion *rand()*, die eine ganze
Pseudozufallszahl zwischen 0 und der Konstante RAND_MAX (in *cstdlib* definiert) ausgibt.

Über den Modulo-Operator lässt sich diese auf den gewünschten Bereich Eingrenzen!
```c++
// idealerweise wird der RNG (Random Number Generator) mit einem Seed-Wert initialisiert !
srand(342235325);

int random = rand() // Zufallszahl zw. 0 und RAND_MAX

int random_range = rand() % 12 // Zufallszahl zwischen 0 und 11
```
Lest euch am besten nochmal den [Artikel im Tutorial](http://www.cplusplus.com/reference/cstdlib/rand/) durch !

### Aufgabe
Schreibt eine kleine REPL-Anwendung (Read-Evaluate-Print-Loop), die Folgendes leistet:

1. Das Programm bittet um Eingabe der Länge einer zufälligen Melodie.
* Das Programm weist darauf hin, das es bei Eingabe der Länge '0' beendet wird.
* Das Programm wartet auf die Eingabe.
* Das Programm gibt eine zufällige Melodie (als String!) auf der Konsole aus.
* Die obigen Schritte wiederholen sich so lange, bis eine '0' eingegeben wird!.

Die (als Strings definierten Noten) können z.B. in einem Array von Strings gespeichert werden.
Zur Auswahl kann dann eine Zufallszahl zw. 0 und 11 generiert werden, die eine Note aus dem Array auswählt.
Funktionen zur Ein- und Ausgabe, das Einbinden einer Header-Datei, sowie Schleifen sollten aus der Vorlesung
bekannt sein.

### 1.4
```c++
#include <iostream>
using namespace std;

int main(){

  string noten_array[11] = {"C","D","E","F","G","A","H","B","C#","F#","D#",};

  int laenge_zufaellige_melodie = 0;

  cout << "Das Programm wird mit 0 beendet!";

  // Abfrage Anzahl Musiker
  cin >> laenge_zufaellige_melodie;
  
  while(true){
    if (laenge_zufaellige_melodie = 0) {
      break;
    } else if ()
  









