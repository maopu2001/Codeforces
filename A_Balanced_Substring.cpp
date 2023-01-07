#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, a = 0, b = 0, l = -1, r = -1;
  cin >> n;
  string s;
  cin >> s;

  for (int i = 0; i < n - 1; i++)
    if (s.substr(i, 2) == "ab" || s.substr(i, 2) == "ba") {
      l = i + 1, r = i + 2;
      break;
    }

  cout << l << " " << r << nl;
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