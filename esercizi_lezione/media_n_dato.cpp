q//Problema. Leggi da standard input una sequenza di n numeri interi,
//con n dato di input, e calcolane la media.
//Stampa quindi il risultato su standard output.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Quanti numeri vuoi dare? ";
    cin >> n;
    
    int s=0;   // somma numeri letti
    int x, c=0;  // numero letto, contatore numeri letti
    
    while (c < n)
    {
       cout << "Dai numero: ";
       cin >> x;
       s=s+x;
       c=c+1;
    }
    if (n<=0)
       cout << "La media non e' definita!" << endl;
    
    else
       cout << "La media e' " << (float)s/n << endl;
       
    system("pause");
    return 0;
}
