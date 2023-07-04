#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, H;
  cin >> n >> H;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  sort(a.begin(), a.end());

  int x = a[n - 1], y = a[n - 2];
  double s = H / (x + y);

  if (H % (x + y) == 0)
    cout << (int)(2 * s) << nl;
  else if (H % (x + y) <= x)
    cout << (int)(2 * s + 1) << nl;
  else
    cout << (int)(2 * s + 2) << nl;
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