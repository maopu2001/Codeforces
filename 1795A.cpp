#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  string s, t;
  cin >> n >> m >> s >> t;

  reverse(t.begin(), t.end());
  s += t;

  int cnt = 0;
  for (int i = 1; i < n + m; ++i) {
    if (s[i - 1] == s[i])
      cnt++;
  }
  cout << (cnt <= 1 ? "YES" : "NO") << nl;
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