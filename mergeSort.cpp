#include <bits/stdc++.h>

using namespace std;

int data[8] = {11, 2, 4, 9, 2, 3, 10, 7};

void print() {
  for (int i = 0; i < 8; i++) {
    cout << data[i] << " ";
  }
  cout << "\n";
}

void swap(int a, int b) {
  int temp = data[b];
  data[b] = data[a];
  data[a] = temp;
}

void mergeSort(int a, int b) {
  int k = a + b / 2;

  for (int i = 0; i < 8; i++) {
    if (data[a] == data[b])
      return;
    else
      swap(a, b);
  }

  mergeSort(a, k);
  mergeSort(k + 1, b);
}

int main() {
  print();
  mergeSort(0, 7);
  print();
}
