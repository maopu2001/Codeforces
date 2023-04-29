#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int p, b, f, ans = 0;
  cin >> p >> b >> f;
  p /= 2;
  int h, c;
  cin >> h >> c;
  if (h >= c) {
    ans += (h * min(p, b));
    p -= min(p, b);
    if (p)
      ans += (c * min(p, f));
  } else {
    ans += (c * min(p, f));
    p -= min(p, f);
    if (p)
      ans += (h * min(p, b));
  }
  cout << ans << nl;
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