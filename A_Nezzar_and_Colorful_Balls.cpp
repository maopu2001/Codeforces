#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x, ans = 0;
  unordered_map<int, int> mp;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (mp.find(x) == mp.end())
      mp.insert({x, 1});
    else
      mp[x]++;
  }
  for (auto it : mp)
    ans = max(ans, it.second);

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