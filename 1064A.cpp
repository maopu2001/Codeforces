#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int a, b, c;
  cin >> a >> b >> c;
  cout << max(2 * max({a, b, c}) - a - b - c + 1, 0) << nl;
  // cout << max(a - b - c + 1, max(b - c - a + 1, max(c - a - b + 1, 0))) <<
  // nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}