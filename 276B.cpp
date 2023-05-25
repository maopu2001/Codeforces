#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  int ct = 0, alpha[26] = {};
  for (char c : s) {
    alpha[c - 'a']++;
  }
  for (int i : alpha) {
    if (i % 2 != 0)
      ct++;
  }
  if (ct % 2 == 1 || ct == 0)
    cout << "First" << nl;
  else
    cout << "Second" << nl;
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