#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] - '0' >= 5)
      s[i] = 9 - s[i] + '0' + '0';
  }
  if (s[0] == '0')
    s[0] = '9';
  cout << s << nl;
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