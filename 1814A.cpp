#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, k;
  cin >> n >> k;
  for (int i = 0; i <= 2; i++)
    if (n - i * k >= 0 && (n - i * k) % 2 == 0) {
      cout << "YES" << nl;
      return;
    }
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