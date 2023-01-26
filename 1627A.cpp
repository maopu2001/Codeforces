#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, r, c, ans = -1;
  cin >> n >> m >> r >> c;
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    for (int j = 0; j < m; j++) {
      if (v[i][j] == 'B')
        ans = 2;
    }
  }

  if (ans == -1) {
    cout << ans << nl;
    return;
  }

  for (int i = 0; i < n; i++) {
    if (v[i][c - 1] == 'B') {
      ans = 1;
      break;
    }
  }

  for (int i = 0; i < m; i++) {
    if (v[r - 1][c - 1] == 'B') {
      ans = 0;
      break;
    }
    if (v[r - 1][i] == 'B') {
      ans = 1;
      break;
    }
  }

  cout << ans << nl;
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