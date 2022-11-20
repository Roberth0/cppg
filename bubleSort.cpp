#include <bits/stdc++.h>

using namespace std;

int order[8] = {1, 3, 8, 2, 9, 2, 5, 6};
int test[8] = {1, 3, 8, 2, 9, 2, 5, 6};

void print() {
  for (int i = 0; i < 8; i++) {
    cout << order[i] << " ";
  }
  cout << "\n";
}

void swapCustom(int x, int y) {
  int temp = 0;
  temp = order[y];
  order[y] = order[x];
  order[x] = temp;
}

void sortCustom() {
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 7; j++) {
      if (order[j] > order[j + 1]) {
        swapCustom(j, j + 1);
      }
    }
  }
}

int main() {
  print();
  sortCustom();
  print();
}
