#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), c(m);
  for (int &e : a) {
    cin >> e;
    e--;
  }
  sort(a.begin(), a.end());

  for (int &e : c)
    cin >> e;

  ll ans = 0;
  for (int i = n - 1; i >= 0; i--) {
    ans += c[min(a[i], n - 1 - i)];
  }
  cout << ans << nl;
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