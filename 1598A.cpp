#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string r1, r2;
  int n;
  cin >> n >> r1 >> r2;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    ans[i] = r1[i] - '0' + r2[i] - '0';
  }
  for (int i = 0; i < n; i++) {
    if (ans[i] == 2) {
      cout << "NO" << nl;
      return;
    }
  }
  cout << "YES" << nl;
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