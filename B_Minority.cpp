#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  int n = s.size(), d0 = 0, d1 = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      d0++;
    else
      d1++;
  }
  if (d1 == d0) {
    d0 = 0, d1 = 0;
    for (int i = 0; i < n - 1; i++) {
      if (s[i] == '0')
        d0++;
      else
        d1++;
    }
  }

  cout << (d0 == d1 ? 0 : min(d1, d0)) << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}