#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void imprimirArreglo(vector<int> vec);

int main() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];

  imprimirArreglo(vec);
  cout << endl;

  return 0;
}

void imprimirArreglo(vector<int> vec) {
  if (vec.empty())
    return;

  cout << vec[0];
  vec.erase(vec.begin());

  if (!vec.empty())
    cout << " ";

  imprimirArreglo(vec);
}