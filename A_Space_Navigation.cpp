#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  int r = 0, l = 0, u = 0, d = 0;
  for (auto i : s) {
    if (i == 'R')
      r++;
    if (i == 'L')
      l++;
    if (i == 'U')
      u++;
    if (i == 'D')
      d++;
    if (n > 0 && r >= n)
      n = 0;
    if (n < 0 && l >= -n)
      n = 0;
    if (m > 0 && u >= m)
      m = 0;
    if (m < 0 && d >= -m)
      m = 0;
    if (!n && !m) {
      cout << "YES" << nl;
      return;
    }
  }

  cout << "NO" << nl;
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