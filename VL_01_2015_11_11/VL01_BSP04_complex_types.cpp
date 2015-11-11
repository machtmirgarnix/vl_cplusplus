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
