#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int a[4], sum = 0;
  for (int i = 0; i < 4; i++)
    cin >> a[i];

  if (a[0] == 0) {
    cout << 1 << nl;
    return;
  }

  // int ans = a[0] + 2 * min(a[1], a[2]);
  // if (a[0] < a[3])
  //   ans += a[0] + 1;
  // else
  //   ans += a[3];

  int ans = a[0] + 2 * min(a[1], a[2]);
  ans += min(a[0] + 1, a[3] + max(a[1], a[2]) - min(a[1], a[2]));

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