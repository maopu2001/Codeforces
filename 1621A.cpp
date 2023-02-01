#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k;
  cin >> n >> k;
  if (k > (n + 1) / 2) {
    cout << -1 << nl;
    return;
  }

  char s[n][n];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      s[i][j] = '.';

  for (int i = 0; i < k; i++)
    s[2 * i][2 * i] = 'R';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << s[i][j];
    cout << nl;
  }
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