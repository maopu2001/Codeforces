#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, k, x, y;
  cin >> n >> k;
  vector<ll> v;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (i != 0)
      v.push_back(abs(x - y));
    y = x;
  }
  sort(v.begin(), v.end());

  cout << accumulate(v.begin(), v.begin() + n - k, 0) << nl;
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