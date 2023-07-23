#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  sort(a.begin(), a.end());
  int ans = 0;
  for (int i = 0; i < m; i++)
    ans = max(ans, ans - a[i]);

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