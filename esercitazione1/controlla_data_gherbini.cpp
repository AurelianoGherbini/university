
#include <iostream>
using namespace std;
int main()
{
  int g, m, a; // giorno, mese e anno sono tre variabili intere
  cout << "Inserisci una data nella forma g m a" << endl; // chiedi l'inserimento di una data e vai a capo
  cin >> g >> m >> a; // inserisci il giono, il mese e l'anno
  if (a >= 1582) // stiamo considerando il calendaraio gregoriano
  {
        if (m>=1 && m<=12) // il mese è corretto
        {
              if (g>=1 && g<=28) // tutti i mesi hanno almeno 28 giorni
                cout << "Data corretta" << endl;
              else if((g==30) && (m!=2)) // tutti i mesi, eccetto febbraio, hanno almeno 30 giorni
                cout << "Data corretta" << endl;
              else if((g==31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)) // solo alcuni mesi hanno 31 giorni
                cout << "Data corretta" << endl;
              else if(g==29 && m==2 && (a%400==0 || (a%4==0 && a%100!=0))) // se ha 29 giorni ed è febbraio ed è bisestile
                cout << "Data corretta" << endl;
              else
                cout << "Data errata" << endl;
        }
        else
          cout << "Data errata" << endl;
  }
  else
    cout << "Prima del 1582 le date non si contavano come oggi" << endl;
  return 0;
}
