#include <bits/stdc++.h>

using namespace std;

void matrix() {

  int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i != 1) {
        cout << m[i][j] << "\t";
      }

      if (i == 1 && j == 1) {
        cout << " \t" << m[1][1] << "\t";
      }
    }
    cout << "\n";
  }
}

int main() {
  int n;
  // cin >> n;
  // int a = 0;
  // bool winner = true;
  // int n2 = n;

  // while (n2 > 1) {
  //   a = n;
  //   if (a % 2 == 0) {
  //     n2 = n - a;
  //     winner = !winner;
  //   } else {
  //     n2 -= 1;
  //   }
  // }
  // winner ? cout << "Ehab\n" : cout << "Mahmoud\n";
  matrix();
}
