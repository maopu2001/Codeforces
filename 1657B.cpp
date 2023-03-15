#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, B, x, y, ans = 0, pre = 0;
  cin >> n >> B >> x >> y;
  for (int i = 0; i < n; i++) {
    if (pre + x <= B) {
      ans += pre + x;
      pre = pre + x;
    } else {
      ans += pre - y;
      pre = pre - y;
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
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}