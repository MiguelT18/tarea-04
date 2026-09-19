#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int menorDato(vector<int> vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec;
  for (int i = 0; i < n; i++)
    cin >> vec[i];

  cout << menorDato(vec) << endl;

  return 0;
}

int menorDato(vector<int> vec) {
  if (vec.size() == 1)
    return vec[0];

  int primero = vec[0];
  vec.erase(vec.begin());
  int menorDelResto = menorDato(vec);

  if (primero < menorDelResto)
    return primero;
  else
    return menorDelResto;
}