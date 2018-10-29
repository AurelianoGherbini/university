/* Problema: dati 3 numeri interi, calcolarne la media.
   Input: 3 numeri interi.
   Output: 1 numero reale (= media dei numeri in input). */

#include <iostream>

using namespace std;

int main()
{
  int x, y, z;
  
  cout << "Dammi 3 numeri interi" << endl;
  cin >> x >> y >> z;
  
  float m;
  m = (x + y + z) / 3.0;
  cout << "La media e' " << m << endl;
  
  system("pause");  
  return 0;
}
