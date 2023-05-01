#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, ans = 0;
  cin >> n;
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
      ans++;
    } else if (n % 3 == 0) {
      n = (2 * n) / 3;
      ans++;
    } else if (n % 5 == 0) {
      n = (4 * n) / 5;
      ans++;
    } else {
      cout << -1 << nl;
      return;
    }
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