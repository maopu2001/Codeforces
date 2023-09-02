#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ct = 0;
  string s;
  cin >> n >> s;
  int ans = 0, cnt = 0;
  bool ok = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') {
      if (ok == false)
        ok = true;
      else
        ans = max(cnt, ans), cnt = 0;
    } else if (ok)
      cnt++;
  }
  if (ok)
    ans = max(ans, cnt);
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