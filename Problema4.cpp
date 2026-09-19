#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int invertirNumeroAux(int n, int invertido);
int invertirNumero(int n);

int main() {
  int n;
  cin >> n;

  cout << invertirNumero(n) << endl;

  return 0;
}

int invertirNumero(int n) { return invertirNumeroAux(n, 0); }

int invertirNumeroAux(int n, int invertido) {
  if (n == 0)
    return invertido;

  int ultimoDigito = n % 10;
  int restoNumero = n / 10;

  return invertirNumeroAux(restoNumero, invertido * 10 + ultimoDigito);
}