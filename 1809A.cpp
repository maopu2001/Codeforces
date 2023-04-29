#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  vector<int> v(10);
  for (char i : s)
    v[i - '0']++;

  int max = *max_element(v.begin(), v.end());
  if (max == 4)
    cout << -1 << nl;
  else if (max == 3)
    cout << 6 << nl;
  else
    cout << 4 << nl;
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