//
//  numeri_primi_gherbini.cpp
//  
//
//  Created by Aureliano Gherbini on 26/10/18.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool is_prime;
    cout << "Immettere un numero: " << endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        is_prime = true;
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            cout << i << endl;
    }
return 0;
}
