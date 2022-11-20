#include <iostream>
#include <string>
using namespace std;

int main() {
  int lines, querys;
  cin >> lines >> querys;

  string data[4];

  for (int i = 0; i < lines; i++) {

    string text;
    getline(cin, text);
    data[i] = text;
  }

  cout << data[2];

  return 0;
}
