#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n;
  cin >> n;
  vector<int> a(n);
  for (auto &i : a)
    cin >> i;

  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    if (sum <= 0) {
      cout << "NO" << nl;
      return;
    }
  }

  sum = 0;
  for (int i = n - 1; i >= 0; i--) {
    sum += a[i];
    if (sum <= 0) {
      cout << "NO" << nl;
      return;
    }
  }

  cout << "YES" << nl;
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