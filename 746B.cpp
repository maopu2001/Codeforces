#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  char ans[n];

  string s;
  cin >> s;

  int m = (n - 1) / 2;
  for (int i = 0; i < n; i++)
    ans[(i % 2) ? m += i : m -= i] = s[i];

  if (n % 2 == 1)
    reverse(ans, ans + n);

  for (int i = 0; i < n; i++)
    cout << ans[i];
  cout << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  // cin >> _;
  // for (int i = 1; i <= _; ++i)
  solve(T);
  return 0;
}