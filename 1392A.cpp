#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define all(v) v.begin(), v.end()
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  sort(all(v));

  if (v[0] == v[n - 1])
    cout << n << nl;
  else
    cout << 1 << nl;
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