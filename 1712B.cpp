#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ct = 1;
  cin >> n;
  if (n & 1) {
    cout << ct << " ";
    ct++;
  }
  while (ct < n) {
    cout << ct + 1 << " " << ct << " ";
    ct += 2;
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