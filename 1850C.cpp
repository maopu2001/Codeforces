#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int ct = 0;
  vector<string> s(8);
  for (string &i : s) {
    cin >> i;
    for (int j = 0; j < 8; j++) {
      if (i[j] != '.')
        ct = j;
    }
  }
  string ans;
  for (int i = 0; i < 8; i++) {
    if (s[i][ct] == '.')
      continue;
    ans.push_back(s[i][ct]);
  }
  cout << ans << nl;
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