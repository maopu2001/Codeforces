#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for (auto &[x, y] : v) {
    cin >> x >> y;
  }
  int first = 0, second = 0;
  for (auto [x, y] : v) {
    first += x, second += y;
  }
  cout << min(first, n - first) + min(second, n - second) << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  // ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}