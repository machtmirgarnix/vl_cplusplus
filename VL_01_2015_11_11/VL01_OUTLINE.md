# C++ - 1. Vorlesung (11. November 2015)
## C++ vs. Python
### Compiler vs. Interpreter
**Python**: interpretiert Sprache
* Interpreter führt Quellcode Zeile für Zeile aus.

**C++**: kompilierte Sprache
* Compiler (zu Deutsch: Übersetzer) übersetzt den Quellcode in Maschinensprache

### Typsystem: statisch, stark vs. Duck-Typing
**Python**: Duck-Typing (a.k.a schwach, dynamisch)
* Datentyp von Variablen wird zur Laufzeit bestimmt!
* "Walks like a duck, quacks like a duck, pecks like a duck => must be a duck!"

**C++**: statisch, stark
* Datentypen müssen zur Compile-Time bekannt sein!
* Variablen eines Datentyps können nur Werte dieses Datentyps zugewiesen werden !

### Klammern vs. Einrückung, Semikolon
* Code-Clöcke werden in C++ mit geschweiften Klammen eingefasst (Python: Einrückung)
* Jede Anweisung (ausser Präprozessor-Anweisungen) werden mit einem Semikolon beendet

## Die C++ Pipeline
Vom Quellcode zur ausführbaren Datei:
* **Präprozessor:** Führt bestimmte Quellcode-Optimierungen und Präprozessor-Anweisungen durch
* **Compiler:** Übersetzt den Quellcode in Maschinensprache (Ergebnis: Object File)
* **Linker:** Fügt die Object-Files zu einer Datei (Executable oder Dynamic Library) zusammen

## Tools
Entwicklungswerkzeuge, die im Rahmen der Vorlesung Verwendung finden (könnten ...):

### Texteditor + Kommandozeile
#### Editoren:
* Atom (universell, frei)
* emacs (alt, kompliziert)
* Notepad++ (Windows)

#### Compiler (auf der Kommandozeile):
* g++
* cmake

Im Rahmen der Vorlesung findet gcc/g++ Verwendung!

Die Kompilierung erfolgt über den Aufruf:
```
g++ source_file.cpp
```

Das Resultat ist eine ausführbare Datei namens *a.out*

Mit der Option *-o* kann der Name der Ausführbaren Datei geändert werden !
```
g++ -o executable_file_name source_file.cpp
```


##### Installation gcc/g++ unter Mac OS
* Hinweise zur Installation [(link)](http://stackoverflow.com/questions/9353444/how-to-use-install-gcc-on-mac-os-x-10-8-xcode-4-4)

##### Installation gcc/g++ unter Windows
* [Cygwin](https://cygwin.com/) installieren
* Cygwin-Pakete: gcc-core (?), g++, make, gdb (aus der Devel-Kategorie)
* evtl. Path-Variable anpassen ...

### IDEs
#### Eclipse
* sehr weit verbreitet
* läuft auf den meisten Systemen
* frei

#### XCode
* Apple-spezifisch (auch für iOS)
* dem Verlautbaren nach sehr Benutzerfreundlich
* proprietär

#### Visual Studio, sonstige ...
* ja nach Geschmack ...

### git
* Tool zur verteilten Versionsverwaltung
* Vorlesungsmaterialien werden über Git verteilt !


## Weitere Resourcen
Zum Nachlesen ...
* [C++ Language Tutorial](http://www.cplusplus.com/doc/tutorial/) (kostenlos, online)
* Breymann: [Der C++ Programmierer](http://www.cppbuch.de) (Buch)
* Stackoverflow, Google, etc.

## Style Guide
Before we start ... ein paar Dinge, die man von vorneherein im Hinterkopf behalten sollte!
### "Programming is telling another human what you want the computer to do" -D. Knuth
* Kann ich den Code in 10 Jahren noch verstehen ?
* Kann jemand anders meinen Quellcode verstehen ?


### DRY vs WET
#### *DRY*: Don't repeat yourself!
Erwischt man sich dabei, das man Quellcode per Copy&Paste durch die Gegend schiebt,
sollte man sich evtl. nochmal über die Struktur des Programmes Gedanken machen !

#### *WET* - We enjoy typing!
Alles doppelt und dreifach machen ... wird unübersichtlich und ist ziemlich anstrengend!

## Programmierung
Die ersten Programmbeispiele ... hoffentlich selbsterklärend ...
### 01 helloworld
```c++
// Dies ist ein Kommentar!

/*
 Dies ist ein Block-Kommentar !
*/

// Präprozessor - Anweisung, Header-Dateien einbinden !
// In den Header-Dateien sind Funktionen registriert (vgl. Module in Python)
// Achtung: kein Semikolon am Ende !
#include <iostream>

// Funktionen können ähnlich einer Ordnerstruktur
// in sog. Namespaces organisiert werden - erstmal im Hinterkopf behalten!
using namespace std;

// Hauptroutine - heisst in jedem ausführbaren C++-Programm so ! (Konvention)
// Gibt eine ganze Zahl (integer) zurück !
int main(){
    // Output-Stream (definiert in der iostream-Bibliothek)
    cout << "Hallo ihr Freaks !!" << " Wir sind heute " << 9 << " Personen in diesem Raum!" << endl;

    // exit-code - Rückgabewert an das Betriebssystem. 0 heisst: "Alles Ok!"
    return 0;
}
```
### 02 Basic IO (cin, cout)
```c++
#include <iostream>
using namespace std;

// Grundlegene Operationen zur Ein- und Ausgabe auf der Konsole
int main(){
    // Deklaration und Initialisierung einer Variable
    // Reserviert Speicher für eine ganze Zahl
    int freaks = 0;

    // endl ist ein Zeilenumbruch
    cout << "Wieviele Personen sind in diesem Raum ?" << endl;

    // Input-Stream - fordert zu einer Eingabe (auf der Konsole) auf ...
    cin >> freaks;

    // Basic Input-Output von der Konsole
    cout << "Es sind " << freaks << " Freaks anwesend!" << endl;

    return 0;
}
```

### 03 Primitve Datentypen
```c++
#include <iostream>
// In der "climits"-Bibliothek sind die maximalen Werte eines jeweiligen Typs notiert.
// Diese können von System zu System variieren!
#include <climits>

using namespace std;

// Primitive Datentypen und deren Maximalwerte
int main(){
    // ganzzahlige Datentypen mit Vorzeichen
    short kleine_ganze_zahl = SHRT_MAX;
    int mittelgrosse_ganze_zahl = INT_MAX;
    long int grosse_ganze_zahl = LONG_MAX;
    long long int riesengrosse_ganze_zahl = LLONG_MAX;

    cout << "maximaler wert für short: " << kleine_ganze_zahl << endl;
    cout << "maximaler wert für int : " << mittelgrosse_ganze_zahl << endl;
    cout << "maximaler wert für long int : " << grosse_ganze_zahl << endl;
    cout << "maximaler wert für long long int : " << riesengrosse_ganze_zahl << endl;

    // ganzzahlige Datentypen OHNE Vorzeichen
    unsigned int mittelgrosse_ganze_zahl_ohne_vz = UINT_MAX;

    // Gleitkommazahlen
    float gleitkommazahl = 0.0;
    double gleitkommazahl_double_precision = 0.0;
    long double gleitkommazahl_double_precision_sehr_gross = 0.0;

    // Buchstaben - WICHTIG !! Einzelne Buchstaben in C++ immer
    char buchstabe = 'a';

    return 0;
}
```

### 04 Komplexe Datentypen
```c++
#include <iostream>
using namespace std;

// mit 'struct' wird eine komplexe Datenstruktur 'erschaffen'
struct Person {
  string name;
  int alter;
};

// Komplexe Datentypen
int main(){

    // 'new' gibt einen Pointer (Zeiger) zurück (mehr dazu später ...)
    Person* dozent = new Person();
    dozent->name = "Niklas";
    dozent->alter = 31;

    cout << "Dozent: " << dozent->name << ", " << dozent->alter << " Jahre!";
    return 0;
}
```

### 05 Kontrollstrukturen
```c++
#include <iostream>
using namespace std;

// Kontrollstrukturen
int main(){

  int freaks = 0;
  cout << "Wieviele Personen sind in diesem Raum ?" << endl;
  // Input-Stream
  cin >> freaks;

  // Verzweigungen (if-then-else)
  if(freaks < 5) {
    cout << "Mann sind das wenig!";
  } else if (freaks > 20){
    cout << "Mann sind das viele!";
  } else {
    cout << "Genau richtig !!";
  }

  // for-schleife
  for(int counter = 0; counter < freaks; counter++) {
    cout << "Eine Person verlässt den Raum ! Es sind noch " << freaks - counter << " Personen anwesend!" << endl;
  }

  // while-schleife
  int counter = 0;
  while(counter < freaks){
    cout << "Eine Person betritt den Raum ! Es sind jetzt " << counter << " Personen anwesend!" << endl;
    counter++;
  }

  // do-while -- Anweisungsblock wird auf jeden Fall 1x Ausgeführt !
  // Abbruchbedingung wird erst nach der Ausführung abgefragt.
  int counter = 0;
  do {
    cout << "Eine Person betritt den Raum ! Es sind noch " << counter << " Personen anwesend!" << endl;
    counter++;
  } while (counter < freaks);

  return 0;
}
```

### 06 Blöcke und Sichtbarkeit
```c++
#include <iostream>
using namespace std;

// globale Variable
int a = 0;

// Sichtbarkeit von Variablen !
int main(){
  // lokale variable 1
  int a = 2;

  {
      // lokale variable 2
      int a = 3;

      // Was kommt hier wohl raus ??
      cout << a << endl;

      // Was kommt hier wohl raus ??
      cout << ::a << endl;
  }

  // Was kommt hier wohl raus ??
  cout << a << endl;

  return 0;
}
```
