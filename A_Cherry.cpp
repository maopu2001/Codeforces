#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  ll ans = 0;
  for (int i = 0; i < n - 1; i++)
    ans = max(ans, v[i] * v[i + 1]);

  cout << ans << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}