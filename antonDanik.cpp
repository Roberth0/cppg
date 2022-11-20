#include <bits/stdc++.h>

using namespace std;

int findWin(string name, string data) {
  int pos = -1;
  int wins = 0;

  do {
    pos = data.find(name, pos + 1);
    wins++;

  } while (pos != -1);

  return wins;
}

int main() {

  ios::sync_with_stdio(0);

  cin.tie(0);

  int n;

  cin >> n;

  string word;
  cin >> word;

  if (findWin("A", word) > findWin("D", word))
    cout << "Anton\n";
  if (findWin("D", word) > findWin("A", word))
    cout << "Danik\n";
  if (findWin("D", word) == findWin("A", word))
    cout << "Friendship\n";

  return 0;
}
