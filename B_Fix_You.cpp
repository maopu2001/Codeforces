#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, ans = 0;
  cin >> n >> m;
  vector<string> v(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> v[i];
    if (v[i][m - 1] == 'R')
      ans++;
  }
  string s;
  cin >> s;
  for (int i = 0; i < m - 1; i++)
    if (s[i] == 'D')
      ans++;

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