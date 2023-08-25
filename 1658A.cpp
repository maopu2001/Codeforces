#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ans = 0;
  string s;
  cin >> n >> s;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      v.push_back(i);
  }
  for (int i = 0; i < (int)v.size() - 1; i++) {
    int j = v[i + 1] - v[i];
    if (j <= 2)
      ans += 3 - j;
  }
  cout << ans << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  // ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}