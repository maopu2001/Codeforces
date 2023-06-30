#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, sum = 0, ct = 0;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;

  bool open = 0;
  for (ll x : a) {
    sum += abs(x);
    if (x < 0 && !open) {
      open = 1;
      ct += 1;
    }
    if (x > 0)
      open = 0;
  }
  cout << sum << " " << ct << nl;
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