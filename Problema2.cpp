#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int cantidadMultiplosDeN(int a, int b, int n);

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  cout << cantidadMultiplosDeN(a, b, n) << endl;
  return 0;
}

int cantidadMultiplosDeN(int a, int b, int n) {
  if (a > b)
    return 0;

  if (a % n == 0)
    return 1 + cantidadMultiplosDeN(a + 1, b, n);
  else
    return cantidadMultiplosDeN(a + 1, b, n);
}