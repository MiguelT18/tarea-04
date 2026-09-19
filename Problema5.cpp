#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int llamadasRecursivaFibonacci(int N);

int main() {
  int N;
  cin >> N;

  cout << llamadasRecursivaFibonacci(N) << endl;

  return 0;
}

int llamadasRecursivaFibonacci(int N) {
  if (N == 1 || N == 0)
    return 1;

  return 1 + llamadasRecursivaFibonacci(N - 1) +
         llamadasRecursivaFibonacci(N - 2);
}