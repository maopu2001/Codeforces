#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  if (sum == x) {
    cout << "NO" << nl;
    return;
  }
  cout << "YES" << nl;

  for (int i = 0; i < n; i++) {
    if (x == a[i])
      swap(a[i], a[i + 1]);
    cout << a[i] << " ";
    x -= a[i];
  }
  cout << nl;
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