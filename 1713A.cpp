#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x, y;
  cin >> n;
  int lx = 0, rx = 0, ly = 0, ry = 0;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    lx = min(lx, x);
    rx = max(rx, x);
    ly = min(ly, y);
    ry = max(ry, y);
  }
  cout << 2 * (rx - lx + ry - ly) << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}