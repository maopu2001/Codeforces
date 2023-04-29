#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

bool pal(string s) {
  string r = s;
  reverse(s.begin(), s.end());
  return r == s;
}

void solve(int T) {
  string s, s1, s2;
  cin >> s;
  s1 = 'a' + s, s2 = s + 'a';
  if (!pal(s1))
    cout << "YES" << nl << s1 << nl;
  else if (!pal(s2))
    cout << "YES" << nl << s2 << nl;
  else
    cout << "NO" << nl;
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