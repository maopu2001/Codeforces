#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  bool check = false;
  int ans = 0, ct = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1')
      check = true;
    if (check && s[i] == '0') {
      ans++;
    }
  }
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '0' && ans != 0)
      ans--;
    else
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