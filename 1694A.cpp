#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  while (n > 0 && m > 0) {
    cout << "10";
    n--, m--;
  }
  while (n--) {
    cout << "0";
  }
  while (m--) {
    cout << "1";
  }
  cout << nl;
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