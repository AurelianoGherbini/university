//
//  conversione_gherbini.cpp
//  
//
//  Created by Aureliano Gherbini on 28/10/18.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    float in, cm;
    do
    {
        cout << "Scegli un'operazione:" << endl;
        cout << "      1. conversione pollici --> cm" << endl;
        cout << "      2. conversione cm --> pollici" << endl;
        cout << "      3. smetti" << endl;
        cin >> n;
        
        if (n < 0 || n > 3)
        {
            cout << "Scelta non valida – ripeti" << endl;
        }
        
        else if (n == 1)
        {
            cout << "Fornire il numero in pollici:" << endl;
            cin >> in;
            cm = in*2.54;
            cout << in << " pollici equivalgono a " << cm << " centrimetri" << endl;
        }
        
        else if (n == 2)
        {
            cout << "Fornire il numero in centimetri:" << endl;
            cin >> cm;
            in = cm/2.54;
            cout << cm << " centrimetri equivalgono a " << in << " pollici" << endl;
        }
    }
    while (n != 3);
    cout << "Arrivederic!" << endl;
}
