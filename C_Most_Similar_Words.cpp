#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, ans = INT_MAX;
  cin >> n >> m;
  vector<string> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int sum = 0;
      for (int x = 0; x < m; x++)
        sum += abs(v[i][x] - v[j][x]);
      ans = min(ans, sum);
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