/* Programma di prova per funzioni matematiche della libreria <cmath> */

#include <iostream> 
#include <cmath> 
#include <climits> 

using namespace std; 

int main() {
  double ris;  
  ris = sqrt(16);  // sqrt(x): radice quadrata di x
  cout << "sqrt(16): " << ris << endl;  // --> 4
  ris = sqrt(0.16);
  cout << "sqrt(0.16): " << ris << endl;  // --> 0.4
  ris = sqrt(17);
  cout << "sqrt(17): " << ris << endl;  // --> 4.12311

  ris = pow(2.0,3.0);  // pow(x,y): elevamento a potenza (x^y)
  cout << "pow(2,3): " << ris << endl;  // --> 8
  ris = pow(1.5,3);  
  cout << "pow(1.5,3): " << ris << endl;  // --> 3.375
  ris = pow(2.0,-3);  
  cout << "pow(2,-3): " << ris << endl;  // --> 0.125

  ris = log10(100);  // log10(x): logaritmo in base 10 di x (x > 0)
  cout << "log10(100): " << ris << endl;  // --> 2
  ris = log10(98.4);  
  cout << "log10(98.4): " << ris << endl;  // --> 1.993
  
  ris = ceil(10.7);  // ceil(x): intero piu' piccolo maggiore o uguale a x
  cout << "ceil(10.7): " << ris << endl;  // --> 11
  ris = floor(10.7);  // floor(x): intero piu' grande minore o uguale a x
  cout << "floor(10.7): " << ris << endl;  // --> 10
  
  cout << INT_MIN << endl;   // --> -2147483648
  cout << INT_MAX << endl;   // --> 2147483647
  cout << INT_MAX+INT_MAX << endl;   // --> -2 !? (overflow)
 
  system("pause");
  return 0;
}

