#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, l = 0, r = 0;
  cin >> n;
  int ck = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (i != 0 && v[i] < v[i - 1] && ck == 0)
      l = i, ck++;
    if (ck == 1 && (v[i] > v[i - 1]))
      r = i, ck++;
    if (ck == 1 && i == n - 1)
      r = i + 1;
  }
  if (is_sorted(v.begin(), v.end())) {
    cout << "yes" << nl << 1 << " " << 1 << nl;
    return;
  }

  reverse(v.begin() + l - 1, v.begin() + r);

  if (is_sorted(v.begin(), v.end()))
    cout << "yes" << nl << l << " " << r << nl;
  else
    cout << "no" << nl;
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