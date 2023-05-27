#include <bits/stdc++.h>

using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, l, r;
  cin >> n >> l >> r;

  vector<int> a(n);
  for (int &e : a)
    cin >> e;
  sort(a.begin(), a.end());

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    int lb = min(int(lower_bound(a.begin(), a.end(), l - a[i]) - a.begin()), i);
    int rb =
        min(int(lower_bound(a.begin(), a.end(), r - a[i] + 1) - a.begin()), i);
    ans += (lb < rb ? (rb - lb) : 0);
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