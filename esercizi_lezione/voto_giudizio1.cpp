/* Problema: convertire un voto numerico tra 0 e 10 in un 
   giudizio, secondo il seguente schema: 
   
   voto <= 5, giudizio: insufficiente  
   5 < voto <= 6.5, giudizio: sufficiente  
   6.5 < voto <= 7.5, giudizio: buono  
   voto > 7.5, giudizio: ottimo 

   Input: un numero reale  
   Output: una stringa di caratteri (= il giudizio) oppure un messaggio
   di errore.
*/
  
#include <iostream>  

using namespace std;

int main()
{
  float voto;
    
  cout << "Dammi il voto numerico (tra 0 e 10): ";  
  cin >> voto;

  if (voto < 0 || voto > 10)
     cout << "voto non valido" << endl;  
  else if (voto <= 5)
     cout << "insufficiente" << endl;  
  else if (voto <= 6.5)
     cout << "sufficiente" << endl;  
  else if (voto <= 7.5)
     cout << "buono" << endl;  
  else
     cout << "ottimo" << endl;  
  cout << "arrivederci" << endl;
  
  system("pause");  
  return 0;  
}
