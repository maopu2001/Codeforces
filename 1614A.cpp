#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, l, r, k, ans = 0;
  cin >> n >> l >> r >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (v[i] < l || v[i] > r)
      continue;
    if (v[i] <= k)
      k -= v[i], ans++;
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