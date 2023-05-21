#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

ll fact(ll n) {
  if (n == 1 || n == 0)
    return 1;
  return n * fact(n - 1);
}

void solve(int T) {
  string s1, s2;
  cin >> s1 >> s2;
  int p = 0;
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] == '+')
      p++;
  }
  int bp = 0, bq = 0;
  for (int i = 0; i < s2.size(); i++) {
    if (s2[i] == '+')
      bp++;
    else if (s2[i] == '?')
      bq++;
  }

  double ans = 0;
  if (bq < (p - bp) || (p - bp) < 0) {
    cout << ans << nl;
    return;
  }

  ans = fact(bq) / (fact(p - bp) * fact(bq - (p - bp)) * (pow(2, bq)));
  cout << ans << nl;
}

int main() {
  cout << setprecision(12) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}
