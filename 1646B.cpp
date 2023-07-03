#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  vector<ll> ps = {0}, ss = {0};
  for (int i = 0; i < n; i++)
    ps.push_back(ps.back() + a[i]);

  for (int i = n - 1; i >= 0; i--)
    ss.push_back(ss.back() + a[i]);

  bool ans = 0;
  for (int i = 1; i <= n; i++) {
    if (2 * i + 1 <= n) {
      ll blue = ps[i + 1];
      ll red = ss[i];
      if (blue < red)
        ans = 1;
    }
  }

  if (ans)
    cout << "YES" << nl;
  else
    cout << "NO" << nl;
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