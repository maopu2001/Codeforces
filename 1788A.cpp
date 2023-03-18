#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ct = 0, ans = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] == 2)
      ct++;
  }
  if (ct % 2 != 0) {
    cout << -1 << nl;
    return;
  }

  int x = ct / 2;
  for (int i = 0; i < n; i++) {
    if (v[i] == 2)
      x--;
    if (x == 0) {
      cout << i + 1 << nl;
      return;
    }
  }
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