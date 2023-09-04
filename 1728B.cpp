#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, st = 2;
  cin >> n;
  if (n % 2 != 0) {
    cout << 1 << " ";
    st++;
  }
  for (int i = st; i <= n - 2; i += 2)
    cout << i << " " << i - 1 << " ";
  cout << n - 1 << " " << n << nl;
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