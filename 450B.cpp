#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll f1, f2, n;
  cin >> f1 >> f2 >> n;
  --n %= 6;
  ll a[] = {f1, f2, f2 - f1, -f1, -f2, f1 - f2};
  ll ans = a[n] % MOD;
  if (ans < 0)
    ans += MOD;
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