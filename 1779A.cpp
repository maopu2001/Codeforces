#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == 'R' && s[i + 1] == 'L') {
      cout << 0 << nl;
      return;
    }
    if (s[i] == 'L' && s[i + 1] == 'R') {
      cout << i + 1 << nl;
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
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}