#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool caracteresIguales(vector<char> vec);

int main() {
  int n;
  cin >> n;

  vector<char> vec(n);
  for (int i = 0; i < n; i++)
    cin >> vec[i];

  if (caracteresIguales(vec))
    cout << "Iguales" << endl;
  else
    cout << "Diferentes" << endl;

  return 0;
}

bool caracteresIguales(vector<char> vec) {
  if (vec.size() <= 1)
    return true;

  if (vec[0] != vec[1])
    return false;

  vec.erase(vec.begin());
  return caracteresIguales(vec);
}