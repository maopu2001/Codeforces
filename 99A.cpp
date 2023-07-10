#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  int ct = 0;
  while (s[ct] != '.')
    ct++;
  if (s[ct - 1] == '9')
    cout << "GOTO Vasilisa." << nl;
  else {
    if (s[ct + 1] >= '5') {
      s[ct - 1] += 1;
    }
    cout << s.substr(0, ct) << nl;
  }
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