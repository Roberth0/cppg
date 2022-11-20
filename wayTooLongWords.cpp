#include <bits/stdc++.h>


using namespace std;

void abbreviate(string word) {
  string abbr = "";
  int n = word.length();
  string first = word.substr(0,1);
  string last = word.substr(n-1);
  cout << first << n - 2 << last << "\n";
}

int main(){
  int n;
  string word;
  cin >> n;

  for( int i = 0; i < n; i++) {
    cin >> word;
    
    if( word.length() <= 10) {
      cout << word << "\n";
      continue;
    }

    abbreviate(word);
  }

  return 0;
}
