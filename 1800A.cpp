#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  string s, check;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    s[i] = tolower(s[i]);
    if (s[i] != s[i - 1] || i == 0)
      check.push_back(s[i]);
  }
  if (check == "meow")
    cout << "YES" << nl;
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