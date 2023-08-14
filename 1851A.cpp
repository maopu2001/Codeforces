#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, k, H, x, ans = 0;
  cin >> n >> m >> k >> H;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (H != x && abs(H - x) % k == 0 && abs(H - x) <= (m - 1) * k)
      ans++;
  }
  cout << ans << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  // ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}