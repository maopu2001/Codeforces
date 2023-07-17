#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n - 1);
  for (int &i : v)
    cin >> i;
  sort(v.begin(), v.end());

  for (int i = 0; i < n; i++) {
    if (v[i] != i + 1) {
      cout << i + 1 << nl;
      return;
    }
  }
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}