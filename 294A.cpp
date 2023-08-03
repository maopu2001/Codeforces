#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  int a[101] = {0};
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  int m, x, y;
  cin >> m;
  for (int i = 1; i <= m; i++) {
    cin >> x >> y;
    a[x - 1] += y - 1;
    a[x + 1] += a[x] - y;
    a[x] = 0;
  }

  for (int i = 1; i <= n; i++)
    cout << a[i] << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}