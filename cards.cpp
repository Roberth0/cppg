#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string letters;
  cin >> letters;

  sort(letters.begin(), letters.end());
  letters.c_str();

  vector<int> res;
  for (int i = 0; i < n; i++) {
    if (letters[i] == 'z') {
      res.push_back(0);
    }
    if (letters[i] == 'n') {
      res.insert(res.begin(), 1);
    }
  }

  for (auto x : res) {
    cout << x << " ";
  }

  cout << "\n";
}
