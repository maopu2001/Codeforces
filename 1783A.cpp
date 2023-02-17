#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  bool same = true;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] != v[i - 1] && i > 0)
      same = false;
  }
  if (same) {
    cout << "NO" << nl;
    return;
  } else
    cout << "YES" << nl;
  sort(v.begin(), v.end(), greater<>());
  cout << v[n - 1] << " ";
  for (int i = 0; i < n - 1; i++) {
    cout << v[i] << " ";
  }
  cout << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(i);
  return 0;
}