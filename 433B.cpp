#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;

vector<ll> v, u, vsum, usum;

void solve(int T) {
  int t, l, r;
  cin >> t >> l >> r;
  if (t == 1)
    cout << vsum[r - 1] - (l - 2 == -1 ? 0 : vsum[l - 2]) << nl;
  else
    cout << usum[r - 1] - (l - 2 == -1 ? 0 : usum[l - 2]) << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i, n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  u = v;
  sort(u.begin(), u.end());

  vsum.push_back(v[0]);
  for (int i = 1; i < n; i++) {
    vsum.push_back(vsum[i - 1] + v[i]);
  }

  usum.push_back(u[0]);
  for (int i = 1; i < n; i++) {
    usum.push_back(usum[i - 1] + u[i]);
  }

  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}