#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int l1, r1, l2, r2;
  cin >> l1 >> r1 >> l2 >> r2;
  if (max(l1, l2) <= min(r1, r2))
    cout << max(l1, l2) << nl;
  else
    cout << l1 + l2 << nl;
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