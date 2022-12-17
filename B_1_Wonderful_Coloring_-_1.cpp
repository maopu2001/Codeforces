#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  vector<int> v(26, 0);
  for (int i : s)
    v[i - 'a']++;

  int ct = 0, c1 = 0;
  for (int i : v) {
    if (i != 0)
      ct++;
    if (i == 1)
      c1++;
  }
  cout << (ct - c1) + (c1 - c1 % 2) / 2 << nl;
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