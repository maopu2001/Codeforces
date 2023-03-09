#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x, in;
  cin >> n >> x;
  int odd = 0, even = 0;
  for (int i = 0; i < n; i++) {
    cin >> in;
    if (in % 2 == 0)
      even++;
    else
      odd++;
  }
  for (int i = 1; i <= odd && i <= x; i += 2) {
    if (x - i <= even) {
      cout << "Yes" << nl;
      return;
    }
  }
  cout << "No" << nl;
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