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

  if (a == 1)
    return b / n;

  return cantidadMultiplosDeN(1, b, n) - cantidadMultiplosDeN(1, a - 1, n);
}