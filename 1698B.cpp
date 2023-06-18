#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  if (k > 1) {
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
      if (a[i] > a[i - 1] + a[i + 1])
        ans++;
    }
    cout << ans << nl;
    return;
  }
  cout << (n - 1) / 2 << nl;
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