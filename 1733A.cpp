#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, k, x, sum = 0;
  vector<ll> a(10000, 0);
  cin >> n >> k;
  for (ll i = 1; i <= n; i++) {
    cin >> x;
    a[i % k] = max(a[i % k], x);
  }
  for (ll i = 0; i < k; i++)
    sum += a[i];
  cout << sum << nl;
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