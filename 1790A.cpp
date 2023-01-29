#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string pi = "314159265358979323846264338327", s;
  int ans = 0;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == pi[i])
      ans++;
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