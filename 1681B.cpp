#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e6 + 5;

void solve(int T) {
  ll n, m, x, ans = 0;
  cin >> n;
  ll a[n];
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  cin >> m;
  ll b[m];
  for (ll i = 0; i < m; i++) {
    cin >> x;
    ans += x;
  }
  cout << a[ans % n] << nl;
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