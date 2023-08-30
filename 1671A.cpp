#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  vector<int> v;
  int ct = 1;
  for (int i = 0; i < (int)s.size() - 1; i++) {
    if (s[i] == s[i + 1])
      ct++;
    else
      v.push_back(ct), ct = 1;
  }
  v.push_back(ct);

  for (int i : v) {
    if (i < 2) {
      cout << "NO" << nl;
      return;
    }
  }
  cout << "YES" << nl;
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