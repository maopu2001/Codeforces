#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  int w = -1, bs = 0;
  for (int i = 1; i <= n; i++) {
    int a, b;
    cin >> a >> b;
    if (b > bs && a <= 10) {
      w = i;
      bs = b;
    }
  }
  cout << w << nl;
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