#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<string> v(n);
  vector<pair<int, int>> pr;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    for (int j = 0; j < v[i].size(); j++)
      if (v[i][j] == '*')
        pr.push_back({i, j});
  }

  int r1 = pr[0].first, r2 = pr[1].first, c1 = pr[0].second, c2 = pr[1].second;

  if (r1 == r2)
    r1 = (r1 + 1) % n, r2 = (r2 + 1) % n;
  else if (c1 == c2)
    c1 = (c1 + 1) % n, c2 = (c2 + 1) % n;
  else
    swap(c1, c2);

  v[r1][c1] = '*', v[r2][c2] = '*';

  for (auto it : v)
    cout << it << nl;
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