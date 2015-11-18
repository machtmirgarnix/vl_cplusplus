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
 
 /*
  if (anzahl_musiker > 4) {
    cout << "Das sind aber zu viele!" << endl;
  } else if (anzahl_musiker < 4){
    cout << "Da fehlt doch noch wer!" << endl;
  } else {
    cout << "Das Quartett ist vollständig" << endl;
  }
*/

  return 0;
}
