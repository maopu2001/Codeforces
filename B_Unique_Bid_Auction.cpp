#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (mp.find(v[i]) == mp.end())
      mp.insert({v[i], 1});
    else
      mp[v[i]]++;
  }
  int ans = -1, m = n + 1;
  for (auto i : mp)
    if (i.second == 1 && i.first < m)
      m = i.first;
  if (!mp.empty())
    for (int i = 0; i < n; i++)
      if (v[i] == m) {
        ans = i + 1;
        break;
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