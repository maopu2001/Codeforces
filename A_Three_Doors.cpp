#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int k, d[3];
  cin >> k >> d[0] >> d[1] >> d[2];
  for (int i = 1; i < 3; i++) {
    if (d[k - 1] == 0) {
      cout << "NO" << nl;
      return;
    }
    k = d[k - 1];
  }
  cout << "YES" << nl;
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