#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

double max(double x, double y) {
  if (x > y)
    return x;
  return y;
}

void solve(int T) {
  int n, l;
  cin >> n >> l;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double ans = max(v[0] , (l - v[n - 1]));
  for (int i = 0; i < n - 1; i++) {
    ans = max(ans, (v[i + 1] - v[i]) / 2.0);
  }
  cout << ans << nl;
}

int main() {
  cout << setprecision(10) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}