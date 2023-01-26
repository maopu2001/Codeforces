#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n), o, e;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] % 2 == 1)
      o.push_back(i + 1);
    else
      e.push_back(i + 1);
  }

  if (o.size() >= 3) {
    cout << "YES" << nl;
    cout << o[0] << " " << o[1] << " " << o[2] << nl;
  } else if (o.size() > 0 && e.size() > 1) {
    cout << "YES" << nl;
    cout << o[0] << " " << e[0] << " " << e[1] << nl;
  } else
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