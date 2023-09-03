#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, rb, cb, rd, cd, ansr, ansc;
  cin >> n >> m >> rb >> cb >> rd >> cd;
  if (rb <= rd)
    ansr = rd - rb;
  else
    ansr = 2 * n - rb - rd;

  if (cb <= cd)
    ansc = cd - cb;
  else
    ansc = 2 * m - cb - cd;

  cout << min(ansr, ansc) << nl;
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