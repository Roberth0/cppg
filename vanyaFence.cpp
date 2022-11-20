#include <bits/stdc++.h>

using namespace std;

int width = 0;

void isHigher(int h, int data){

  if (data <= h ){ 
    width++;
    return;
  }
  
  width += 2;
}



int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, h;

  cin >> n >> h;

  int data[n];

  for (int i = 0; i < n; ++i){
    cin >> data[i];
    isHigher(h, data[i]);
  }

  cout << width << "\n";

  return 0;
}
