#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i <= 4; i++)
    if (s.substr(0, i) + s.substr(n - (4 - i), 4 - i) == "2020") {
      cout << "YES" << nl;
      return;
    }

  cout << "NO" << nl;
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