#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  string s, ans;
  cin >> s;
  int i = n - 1;
  while (i >= 0) {
    if (s[i] != '0') {
      ans += ('a' - 1) + s[i] - '0';
      i--;
    } else {
      ans += ('a' - 1) + stoi(s.substr(i - 2, 2)); // stoi turns a string into int
      i -= 3;
    }
  }
  reverse(ans.begin(), ans.end());
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