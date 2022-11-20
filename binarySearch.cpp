#include <bits/stdc++.h>

using namespace std;

int data[] = {1, 2, 5, 9, 10, 15, 20, 23, 24, 25, 50, 59, 60, 72};

int len = sizeof(data) / sizeof(int);

void search(int valueToFind) {
  int a = 0;
  int b = len - 1;

  while (true) {
    int mid = (a + b) / 2;
    if (data[mid] == valueToFind) {
      cout << "Value found at index " << mid << "\n";
      return;
    }

    if (data[mid] < valueToFind)
      a = mid + 1;
    else
      b = mid - 1;
  }
}

int main() {
  cout << len << "\n";
  search(25);
  search(50);
  search(9);
}
