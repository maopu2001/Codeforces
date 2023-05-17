#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, m;
  cin >> n >> m;
  ll k = n / m;
  cout << k * (k - 1) / 2 * (m - n % m) + k * (k + 1) / 2 * (n % m) << " "
       << (n - m) * (n - m + 1) / 2 << nl;
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