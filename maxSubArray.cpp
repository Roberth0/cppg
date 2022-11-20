#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> data = {-1, 2, 4, -3, 5, 2, -5, 2};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int best = 0;

  // O(n3) solution
  // for (int i = 0; i < data.size(); i++) {
  //   for (int j = 1; j < data.size(); j++) {
  //     int suma = 0;
  //     for (int k = i; k <= j; k++) {
  //       suma += data[k];
  //     }
  //     if (suma > best)
  //       best = suma;
  //   }
  // }

  // O(n2) solution
  for (int i = 0; i < data.size(); i++) {
    int suma = 0;
    for (int j = i; j < data.size(); i++) {
      suma += data[i];
      if (suma > best)
        best = suma;
    }
  }

  // O(n) solution
  // int suma = 0;
  // for (int i = 0; i < data.size(); i++) {
  //   suma = max(data[i], suma + data[i]);
  //   if (suma > best)
  //     best = suma;
  // }

  cout << "best " << best << "\n";
}
