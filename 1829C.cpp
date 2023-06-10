#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  map<string, int> mp;
  mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;
  int ans = 1e9;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    string s;
    cin >> s;
    mp[s] = min(mp[s], x);
  }
  if (min(mp["11"], (mp["10"] + mp["01"])) > (int)1e6)
    cout << -1 << nl;
  else
    cout << min(mp["11"], mp["10"] + mp["01"]) << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}