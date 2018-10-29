//
//  menu_operazione_gherbini.cpp
//
//
//  Created by Aureliano Gherbini on 28/10/18.
//

#include <iostream>
using namespace std;


int valore_assoluto(){
    int n;
    cout << "Inserisci un numero intero su cui eseguire l'operazione:" << endl;
    cin >> n;
    if (n >= 0)
        cout << "Il valore assoluto di " << n << " è " << n  << endl;
    else
        cout << "Il valore assoluto di " << n << " è " << -n << endl;
}


int main(){
    int n, op;
    do
    {
        cout << "Scegli una delle seguenti operazioni:" << endl;
        cout << "       1. valore assoluto" << endl;
        cout << "       2. quadrato" << endl;
        cout << "       3. sommatoria" << endl;
        cout << "       4. fattoriale" << endl;
        cout << "       5. esci" << endl;
        cout << "Operazione scelta?" << endl;
        cin >> op;

        switch (op)
        {
            case 1:
                valore_assoluto();
                break;
            case 2:
            {
                cout << "Inserisci un numero intero su cui eseguire l'operazione:" << endl;
                cin >> n;
                cout << "La potenza di " << n << " è " << n*n << endl;
                break;
            }
            case 3:
            {
                cout << "Inserisci un numero intero su cui eseguire l'operazione:" << endl;
                cin >> n;
                int l, sommatoria = 0;
                for (l = n; l > 0; l--)
                {
                    sommatoria = sommatoria+l;
                }
                cout << "La sommatoria di " << n << " è " << sommatoria << endl;
                break;
            }
            case 4:
            {
                cout << "Inserisci un numero intero su cui eseguire l'operazione" << endl;
                cin >> n;
                int i, fattoriale = 1;
                for (i = n; i > 1; i--)
                    {
                        fattoriale = fattoriale*i;
                    }
                cout << "Il fattoriale di " << n << " è " << fattoriale << endl;
                break;
            }
            case 5:
            {
                cout << "Termina" << endl;
                break;
            }
            default:
            {
                cout << "Scelta non valida" << endl;
                break;
            }

        }
    }
    while (op != 5);

return 0;
}
