#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, x;
  cin >> n >> m;
  vector<int> a(n), b(m), ans;

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < m; i++) {
    cin >> x;
    for (int j = 0; j < n; j++)
      if (x == a[j])
        ans.push_back(x);
  }

  if (ans.empty())
    cout << "NO" << nl;
  else
    cout << "YES\n1 " << ans[0] << nl;
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