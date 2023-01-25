#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int m = abs(v[n - 1] - v[0]), x = n, y = 1;
  for (int i = 0; i < n - 1; i++) {
    if (abs(v[i] - v[i + 1]) < m) {
      m = abs(v[i] - v[i + 1]);
      x = i + 1, y = i + 2;
    }
  }
  cout << x << " " << y << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  // cin >> _;
  // for (int i = 1; i <= _; ++i)
  solve(T);
  return 0;
}