#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;
bool o[1005];

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n), ans;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  reverse(v.begin(), v.end());
  for (int x : v) {
    if (o[x])
      continue;
    o[x] = true;
    ans.push_back(x);
  }
  reverse(ans.begin(), ans.end());
  cout << ans.size() << nl;
  for (int x : ans)
    cout << x << " ";
  cout << nl;
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