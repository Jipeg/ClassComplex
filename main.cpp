#include <iostream>
#include <cmath>
#include "complex.h"
using namespace std;
int main ()
{
  Complex a (5, 2);
  Complex b (3, -3);
  cout << "a = " << a << "; b =" << b << endl;
  cout << 2 + b << endl;
  cout << 2 / a << endl;
  cout << a / 4 << endl;

  complex qwe = 1 + a;
  cout << qwe << endl;

  complex k = ln(a) * ln(b);
  cout << k << endl;
  return 0;
}
