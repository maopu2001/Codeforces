#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k;
  cin >> n >> k;
  string s(n, 'a');
  for (int i = n - 2; i >= 0; k -= (n - i - 1), i--) {
    if (k <= (n - i - 1)) {
      s[i] = 'b';
      s[n - k] = 'b';
      cout << s << nl;
      return;
    }
  }
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