#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n), b, c;
  for (int &i : v)
    cin >> i;
  sort(v.begin(), v.end());
  for (int i : v) {
    if (i == v[n - 1])
      c.push_back(i);
    else
      b.push_back(i);
  }
  if (b.size() == 0 || c.size() == 0)
    cout << -1 << nl;
  else {
    cout << b.size() << " " << c.size() << nl;
    for (int i : b)
      cout << i << " ";
    cout << nl;
    for (int i : c)
      cout << i << " ";
    cout << nl;
  }
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