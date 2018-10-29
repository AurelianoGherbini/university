// Problema: dati in input due numeri interi positivi calcolarne 
// il minimo comune multiplo e stampare il risultato

#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "DAI IL PRIMO NUMERO: ";
  cin >> a;
  cout << "DAI IL SECONDO NUMERO: ";
  cin >> b;
  int ma = a;
  int mb = b;
  while (ma != mb) 
    if (ma < mb)
      ma = ma + a;
    else
      mb = mb + b;
  cout << "IL M.C.M. DI " << a << " E " << b << " E': " << ma << endl;
  
  system("pause");
  return 0;
}
