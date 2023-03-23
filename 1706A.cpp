#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, x;
  cin >> n >> m;
  vector<int> v(n);
  string s;
  for (int i = 0; i < m; i++)
    s.push_back('B');

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (s[x - 1] == 'B' && s[m - x] == 'B')
      s[min(x - 1, m - x)] = 'A';
    else if (s[x - 1] == 'B')
      s[x - 1] = 'A';
    else if (s[m - x] == 'B')
      s[m - x] = 'A';
  }
  cout << s << nl;
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