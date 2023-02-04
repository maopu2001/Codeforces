#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int a[4];
  for (int i = 0; i < 4; i++)
    cin >> a[i];
  int m = *min_element(a, a + 4), M = *max_element(a, a + 4);
  if (a[0] > a[3])
    swap(a[0], a[3]);
  if (a[1] > a[2])
    swap(a[1], a[2]);

  if ((a[0] == m && a[3] == M) || (a[1] == m && a[2] == M))
    cout << "YES" << nl;
  else
    cout << "NO" << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}