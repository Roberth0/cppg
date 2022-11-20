#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> data;

  for (int i = 0; i < n - 1; i++) {
    int j;
    cin >> j;
    data.push_back(j);
  }
  sort(data.begin(), data.end());

  int sum = (n * (n + 1)) / 2;

  int arraySum = 0;

  for (auto x : data) {
    arraySum += x;
  }

  cout << sum - arraySum << "\n";

  // if (n == 2 && data[0] == 1) {
  //   cout << 2 << "\n";
  //   return 0;
  // }

  // if (n == 2 && data[0] == 2) {
  //   cout << 1 << "\n";
  //   return 0;
  // }

  // for (int i = 0; i < n; i++) {
  //   if (data[i + 1] != data[i] + 1) {
  //     cout << data[i] + 1 << "\n";
  //     break;
  //   }
  // }
}
