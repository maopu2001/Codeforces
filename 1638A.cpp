#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int l = 0;
  while (a[l] == l + 1 && l < n - 1)
    l++;

  int r = l;
  while (a[r] != l + 1)
    r++;

  reverse(a + l, a + r + 1);
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
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