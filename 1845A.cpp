#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k, x;
  cin >> n >> k >> x;
  if (x != 1) {
    cout << "YES" << nl << n << nl;
    for (int i = 0; i < n; i++)
      cout << 1 << " ";
  } else if (k == 1 || (k == 2 && n % 2 == 1)) {
    cout << "NO";
  } else {
    cout << "YES" << nl << n / 2 << nl;
    cout << (n % 2 == 1 ? 3 : 2) << " ";
    for (int i = 0; i < n / 2 - 1; i++)
      cout << 2 << " ";
  }
  cout << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  // ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}