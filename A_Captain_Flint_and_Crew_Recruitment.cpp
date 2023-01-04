#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  if (n <= 30)
    cout << "NO" << nl;
  else {
    int x = n - 30;
    cout << "YES" << nl;
    if (x == 6 || x == 10 || x == 14)
      cout << "6 10 15 " << x - 1 << nl;
    else
      cout << "6 10 14 " << x << nl;
  }
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