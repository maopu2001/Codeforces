#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s, ans;
  cin >> s;
  int lst = s.size() - 1;

  for (int i = 0; i <= lst; i++) {
    if (s[i] < s[lst] && (s[i] - '0') % 2 == 0) {
      swap(s[i], s[lst]);
      cout << s << nl;
      return;
    }
  }
  for (int i = lst; i >= 0; i--) {
    if (s[i] > s[lst] && (s[i] - '0') % 2 == 0) {
      swap(s[i], s[lst]);
      cout << s << nl;
      return;
    }
  }

  cout << -1 << nl;
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