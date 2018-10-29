// Dato un numero in input ne stampa il
// valore assoluto.

#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Inserisci un numero" << endl;
    cin >> x;
    int abs_x;
    if (x < 0) abs_x = -x;
    else abs_x = x;
    cout << "Il valore assoluto di " << x << " e' "
         << abs_x << "." << endl;

    system("pause");
    return 0;
}
