#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;
const int N = 2 * 1e5 + 10;

void solve(int T) {
  int n, k;
  cin >> n >> k;

  vector<int> diff;
  int ct = 0, z = 0;
  for (int i = 0; i < n; i++) {
    char c;
    cin >> c;
    if (c == '1') {
      diff.push_back(ct - 2 * k);
      ct = 0;
    } else
      ct++, z++;
  }
  diff.push_back(ct - 2 * k);

  int len = diff.size(), ans = 0;

  diff[0] = max(diff[0] + k, 0);
  diff[len - 1] = max(diff[len - 1] + k, 0);

  for (int d : diff)
    ans += (d + k) / (k + 1);

  if (z == n)
    ans = (n + k) / (k + 1);

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