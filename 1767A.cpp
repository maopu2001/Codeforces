#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  if ((a == c || c == e || a == e) && (b == d || d == f || b == f))
    cout << "NO" << nl;
  else
    cout << "YES" << nl;
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