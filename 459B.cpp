#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, m = INT_MAX, M = 0, mn = 0, Mn = 0;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    m = min(m, v[i]);
    M = max(M, v[i]);
  }
  for (int i = 0; i < n; i++) {
    if (v[i] == m)
      mn++;
    if (v[i] == M)
      Mn++;
  }
  ll ans = mn * Mn;
  if (m == M)
    ans = n * (n - 1) / 2;

  cout << M - m << " " << ans << nl;
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