#include <iostream>
// In der "climits"-Bibliothek sind die maximalen Werte eines jeweiligen Typs notiert.
// Diese können von System zu System variieren!
#include <climits>

using namespace std;

// Die wichtigesten primitiven Datentypen (und deren Maximalwerte)
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
    unsigned short kleine_ganze_zahl_ohne_vz = USHRT_MAX;
    unsigned int mittelgrosse_ganze_zahl_ohne_vz = UINT_MAX;
    unsigned long int grosse_ganze_zahl_ohne_vz = ULONG_MAX;
    unsigned long long int riesengrosse_ganze_zahl_ohne_vz = ULLONG_MAX;

    // Gleitkommazahlen (hier gibt die climits-Bibliothek leider keine Konstanten für vor ...)
    float gleitkommazahl = 0.0;
    double gleitkommazahl_double_precision = 0.0;
    long double gleitkommazahl_double_precision_sehr_gross = 0.0;

    // Buchstaben - WICHTIG !! Einzelne Buchstaben in C++ immer
    char buchstabe = 'a';

    // boolean - true oder false
    bool boolean = true;

    return 0;
}
