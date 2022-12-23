#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  string s, ans;
  cin >> n >> s;
  bool ok = true;
  for (int i = 0; i < n; i++) {
    if (s[i] == '0')
      ans.push_back('+');
    else if (s[i] == '1' && ok) {
      ans.push_back('+');
      ok = false;
    } else {
      ans.push_back('-');
      ok = true;
    }
  }
  cout << ans.substr(1, s.size() - 1) << nl;
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