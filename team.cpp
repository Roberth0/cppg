#include <bits/stdc++.h>

using namespace std;

int valid = 0; 

void solve(){
  int value = 0;
  string data;
  getline(cin, data); 

  if (data.length() < 2 ) return;

  int pos = -1;
  
  do {
    pos = data.find("1", pos + 1);
    value++;
  } while( pos != -1);

  if(value > 2) valid++;
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  string data;

  for(int i = 0; i <= n; ++i){
    solve();
  }
  cout << valid << "\n";

  return 0;
}
