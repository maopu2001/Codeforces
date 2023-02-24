#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ans = 0;
  cin >> n;
  string e, g;
  cin >> e >> g;
  for (int i = 0; i < n; i++) {
    if (g[i] == '0')
      continue;

    if (e[i] == '0')
      ans++;
    else if (e[i - 1] == '1' && i != 0)
      e[i - 1] = '0', ans++;
    else if (e[i + 1] == '1' && i != n - 1)
      e[i + 1] = '0', ans++;
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