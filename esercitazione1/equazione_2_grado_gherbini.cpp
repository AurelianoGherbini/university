
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, x1, x2, determinante; // dichiaro i tre coefficenti, le due possibili radici risultanti e il discriminante
    cout << "Inserisci i coefficienti a b c"; // output di richiesta dei tre coefficenti
    cin >> a >> b >> c; // input tre coefficenti
    determinante = (b*b) - (4*a*c); // assegno una espressione al discriminante
    if (determinante > 0)
    {
        x1 = (-b + sqrt(determinante)) / (2*a);
        x2 = (-b - sqrt(determinante)) / (2*a);
        cout << "Due soluzioni diverse" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (determinante == 0)
    {
        cout << "Due soluzioni coincidenti" << endl;
        x1 = (-b + sqrt(determinante)) / (2*a);
        cout << "x1 = x2 = " << x1 << endl;
    }
     else
         cout << "Non ha soluzione"  << endl;
    return 0;
}
