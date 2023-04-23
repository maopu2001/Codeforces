#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  string s;
  for (int i = 0; i < n; i++) {
    s.push_back('(');
    s.push_back(')');
  }
  for (int i = 0; i < n; i++) {
    sort(s.begin(), s.begin() + 2 + 2 * i);
    cout << s << nl;
  }
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