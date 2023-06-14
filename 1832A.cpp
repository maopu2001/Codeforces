#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  vector<int> alpha(26, 0);
  int len = s.size();
  for (int i = 0; i < len; i++) {
    if (len % 2 == 1 && i == (len - 1) / 2)
      continue;
    alpha[s[i] - 'a']++;
  }

  int ct = 0;
  for (int a : alpha) {
    if (a != 0 && a % 2 == 0)
      ct++;
  }
  if (ct > 1)
    cout << "YES" << nl;
  else
    cout << "NO" << nl;
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