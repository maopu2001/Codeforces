#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, a, b, c, r, ans = 0;
  cin >> n >> a >> b >> c;
  for (int i = 0; a * i <= n; i++) {
    for (int j = 0; a * i + b * j <= n; j++) {
      r = n - (a * i + b * j);
      if (r % c == 0)
        ans = max(ans, i + j + r / c);
    }
  }
  cout << ans << nl;
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