#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string flews;
  int seatleSF = 0;

  cin >> n;
  cin >> flews;
  flews.c_str();

  for (int i = 0; i < n; i++) {
    if (flews[i] == 'S' && flews[i + 1] == 'F') {
      seatleSF += 1;
    }
    if (flews[i] == 'F' && flews[i + 1] == 'S') {
      seatleSF -= 1;
    }
  }
  seatleSF > 0 ? cout << "YES\n" : cout << "NO\n";
}
