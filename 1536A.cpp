#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x;
  cin >> n;
  bool check = false;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x < 0)
      check = true;
  }
  if (check) {
    cout << "NO" << nl;
    return;
  }
  cout << "YES" << nl << 101 << nl;
  for (int i = 0; i < 101; i++)
    cout << i << " ";
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