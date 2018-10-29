//
//  valuta_espressione_gherbini.cpp
//  
//
//  Created by Aureliano Gherbini on 28/10/18.
//

#include <iostream>
using namespace std;
int main()
{
    int n, m, z, t, o, d;
    char op, c;
    do
    {
        cout << "Dai un'espressione intera semplice:" << endl;
        cin >> n >> op >> m;
            if (op == '+')
            {
                z = (n + m);
                cout << "Il risultato è: " << z << endl;
            }
            else if (op == '-')
            {
                t = (n - m);
                cout << "Il risultato è: " << t << endl;
            }
            else if (op == '*')
            {
                o = (n * m);
                cout << "Il risultato è: " << o << endl;
            }
            else if (((op == '/') || (op == ':')) && (m != 0))
            {
                d = (n / m);
                cout << "Il risultato è: " << d << endl;
            }
            else if (((op == '/') || (op == ':')) && (m == 0))
            {
                cout << "Non è possibile divedere un intero per 0" << endl;
            }
            else
            {
               cout << "Operatore non valido." << endl;
            }
            do
            {
                cout << "Vuoi continuare?(s/n)" << endl;
                cin >> c;
            }
            while ((c != 's') && (c != 'n'));
    }
    while (c == 's');
    
    return 0;
}
