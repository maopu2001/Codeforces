#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, x, mx = -INT_MAX, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    mx = max(mx, x);
    sum += x;
  }
  sum -= mx;
  cout << sum / (double)(n - 1) + mx << nl;
}

int main() {
  cout << setprecision(9) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}