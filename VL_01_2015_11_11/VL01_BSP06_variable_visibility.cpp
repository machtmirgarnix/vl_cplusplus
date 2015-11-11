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
