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
