#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int x, y;
  cin >> x >> y;
  if (x == 0 && y == 0)
    cout << 0 << nl;
  else if (sqrt(x * x + y * y) == int(sqrt(x * x + y * y)))
    cout << 1 << nl;
  else
    cout << 2 << nl;
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