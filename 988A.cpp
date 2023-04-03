#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k, x;
  cin >> n >> k;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> x;
    mp.insert({x, i + 1});
  }
  if (mp.size() < k)
    cout << "NO" << nl;
  else {
    cout << "YES" << nl;
    int ct = 0;
    for (auto [x, y] : mp) {
      cout << y << " ";
      ct++;
      if (ct == k)
        break;
    }
    cout << nl;
  }
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