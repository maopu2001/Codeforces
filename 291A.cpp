#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x, ans = 0;
  cin >> n;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x != 0)
      mp[x]++;
  }
  for (auto [x, y] : mp) {
    if (y == 2)
      ans++;
    if (y > 2) {
      ans = -1;
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
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}