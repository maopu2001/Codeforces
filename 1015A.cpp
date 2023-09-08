#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  vector<int> a(m + 2), ans;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    a[l]++, a[r + 1]--;
  }
  for (int i = 1; i <= m; i++) {
    a[i] += a[i - 1];
    if (a[i] == 0)
      ans.push_back(i);
  }

  cout << ans.size() << nl;
  for (int i : ans)
    cout << i << " ";
  cout << nl;
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