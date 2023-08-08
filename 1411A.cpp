#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ct = 0;
  cin >> n;
  string s;
  cin >> s;
  bool check = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] == ')' && check)
      ct++;
    else
      check = 0;
  }
  cout << (ct > n - ct ? "Yes" : "No") << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  // ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}