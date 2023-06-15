#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int m, ans = INT_MAX;
  cin >> m;
  int a[2][m];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int Sum1 = accumulate(a[0], a[0] + m, 0);
  int Sum2 = 0;

  for (int i = 0; i < m; i++) {
    Sum1 -= a[0][i];
    ans = min(ans, max(Sum1, Sum2));
    Sum2 += a[1][i];
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