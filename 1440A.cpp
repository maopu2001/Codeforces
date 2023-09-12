#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, c0, c1, t, ans = 0;
  string s;
  cin >> n >> c0 >> c1 >> t >> s;
  for (int i = 0; i < n; i++)
    (s[i] == '0' ? ans += min(c0, c1 + t) : ans += min(c1, c0 + t));
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