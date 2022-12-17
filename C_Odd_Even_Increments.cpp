#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, e = 0, o = 0, x;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (i % 2 == 0)
      o += x % 2;
    else
      e += x % 2;
  }

  if ((e == n / 2 || e == 0) && (o == ceil(n / 2.0) || o == 0))
    cout << "YES" << nl;
  else
    cout << "NO" << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}