#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, c0 = 0, c5 = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == 0)
      c0++;
    else
      c5++;
  }
  if (c5 == n) {
    cout << -1 << nl;
    return;
  }
  if (c5 < 9) {
    cout << 0 << nl;
    return;
  }
  for (int i = 0; i < (c5 / 9) * 9; i++)
    cout << 5;
  for (int i = 0; i < c0; i++)
    cout << 0;
  cout << nl;
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