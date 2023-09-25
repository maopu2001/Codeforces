#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;

  for (int i = 0; i < n; i++) {
    if (a[i] <= i + 1) {
      cout << "YES" << nl;
      return;
    }
  }
  cout << "NO" << nl;
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