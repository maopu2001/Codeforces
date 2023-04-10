#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  string s;
  cin >> n >> m >> s;
  for (int i = 0; i < n; ++i) {
    if (s[i] - '0' >= m) {
      cout << s[i];
    } else {
      cout << m;
      for (int j = i; j < n; ++j) {
        cout << s[j];
      }
      cout << nl;
      return;
    }
  }
  cout << m << nl;
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