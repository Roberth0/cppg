#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void isEven(int x){
  if ( x % 2 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main(){
  int w;
  cin >> w;

  if (w <= 2 ){
    cout << "NO\n";
    return 0;
  }

  isEven(w);

  return 0;
}
