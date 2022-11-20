#include <bits/stdc++.h>
using namespace std;

void findRepetitions(string word) {
  int result = 0;
  int x = 1;

  for (int i = 0; i < word.length(); i++) {
    if (word[i + 1] == word[i]) {
      x += 1;
    } else {
      if (x > result) {
        result = x;
        x = 1;
      }
    }
  }
  cout << result << "\n";
}

int main() {
  string sequence;
  getline(cin, sequence);
  findRepetitions(sequence);
}
