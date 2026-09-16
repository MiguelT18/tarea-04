#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool esMultiplo(int n);

int main() {
  int n;

  cin >> n;

  cout << esMultiplo << endl;

  return 0;
}

bool esMultiplo(int n) {
  if (n < 0)
    return esMultiplo(-n);

  if (n == 0 || n == 7)
    return 1;
  if (n < 10)
    return 0;

  int ultimoDigito = n - (n / 10) * 10;
  int restoNumero = n / 10;

  return esMultiplo(restoNumero - 2 * ultimoDigito);
}
