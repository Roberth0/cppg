#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define STR to_string

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;
  string res = "" + STR(n);

  while (n > 1) {
    if (n % 2 == 0) {
      n = n / 2;
      res += " " + STR(n);
    } else {
      n = n * 3 + 1;
      res += " " + STR(n);
    }
  }
  cout << res << "\n";
}
