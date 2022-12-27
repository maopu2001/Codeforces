#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  bool r = 0, g = 0, b = 0;
  cin >> s;
  for (int i = 0; i < 6; i++) {
    if (s[i] == 'r')
      r = 1;
    if (s[i] == 'g')
      g = 1;
    if (s[i] == 'b')
      b = 1;
    if ((s[i] == 'R' && r == 0) || (s[i] == 'G' && g == 0) ||
        (s[i] == 'B' && b == 0)) {
      cout << "NO" << nl;
      return;
    }
  }
  cout << "YES" << nl;
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