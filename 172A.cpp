#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  char s[30000][25];
  for (int i = 0; i < n; i++)
    cin >> s[i];

  int ans = strlen(s[0]);
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < ans; j++) {
      if (s[i][j] != s[i - 1][j]) {
        ans = j;
        break;
      }
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
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}