#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

ll sum(ll n) {
  int s = 0;
  while (n != 0) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

void solve(int T) {
  ll n;
  cin >> n;
  while (true) {
    if (gcd(n, sum(n)) > 1)
      break;
    n++;
  }
  cout << n << nl;
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