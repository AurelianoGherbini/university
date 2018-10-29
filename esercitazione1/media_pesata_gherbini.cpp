
#include <iostream>
using namespace std;
int main ()
{
    int voto, cfu, prodotto, cfutot, prodottotot, numerovoti;
    float media;
    numerovoti = 0;
    prodotto = 0;
    prodottotot = 0;
    cfutot = 0;

    do
    {
        cout << "Immettere un voto (negativo per smettere): " << endl;
        cin >> voto;
        if (voto > 0)
        {
            if (voto > 30 || voto < 18)
                cout << "I voti devono essere compresi tra 18 e 30" << endl;
            else
            {
               cout << "Immettere i CFU del corso: " << endl;
               cin >> cfu;
               prodotto = cfu*voto;
               prodottotot += prodotto;
               cfutot += cfu;
               numerovoti ++;
            }
        }
    }
    while (voto > 0);

    cout << "Hai immesso numero voti: " << numerovoti << endl;
    media = prodottotot/cfutot;
    cout << "La media pesata dei tuoi voti è: " << media << endl;
return 0;
}
