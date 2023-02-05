#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x = 0, y = 0;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    switch (s[i]) {
    case 'U':
      x++;
      break;
    case 'D':
      x--;
      break;
    case 'R':
      y++;
      break;
    case 'L':
      y--;
      break;
    }
    if (x == 1 && y == 1) {
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