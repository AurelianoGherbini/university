
#include <iostream>
using namespace std;
int main ()
{
    int r, c, x, y;
    char p;
    cout << "Inserisci quante righe vuoi: " << endl;
    cin >> r;
    cout << "Inserisci quante colonne vuoi: " << endl;
    cin >> c;
    if (r <= 0 || c <= 0)
        cout << "Devi inserire due interi positivi";
    else
    {
        cout << "Inserisci il carattere di riempimento del rettangolo: " << endl;
        cin >> p;
        for (x = 0; x < r; x++)
        {
            for (y = 0; y < c; y++)
            {
                if (x==0 || y==0 || x==(r-1) || y==(c-1))
                {
                    cout << "*";
                }
                else
                {
                    cout << p;
                }
            }
            cout << "\n";
        }
    }
return 0;
}
