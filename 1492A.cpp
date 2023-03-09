#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  a = (n % a == 0 ? 0 : a - n % a);
  b = (n % b == 0 ? 0 : b - n % b);
  c = (n % c == 0 ? 0 : c - n % c);
  cout << min({a, b, c}) << nl;
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