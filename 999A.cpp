#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  int ans = 0;
  while (!a.empty() && a.back() <= k) {
    ans++;
    a.pop_back();
  }
  reverse(a.begin(), a.end());
  while (!a.empty() && a.back() <= k) {
    ans++;
    a.pop_back();
  }

  cout << ans << nl;
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