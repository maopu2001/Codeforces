#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const ll MOD = 1e6 + 7;

vector<bool> isPrime(MOD, 1);

void solve(int T) {
  ll n;
  cin >> n;
  ll sq = sqrt(n);
  if (sq * sq == n && isPrime[sq] && n != 1) {
    cout << "YES" << nl;
  } else
    cout << "NO" << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  // DP start
  for (ll p = 2; p * p <= MOD; p++) {
    if (isPrime[p] == true) {
      for (ll i = p * p; i <= MOD; i += p)
        isPrime[i] = false;
    }
  }
  // DP End

  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}