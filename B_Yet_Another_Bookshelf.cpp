#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v;
  bool st = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1)
      st = 1;
    if (st)
      v.push_back(x);
  }
  st = 0;
  int ct = 0, sum = 0;
  for (int i = v.size() - 1; i >= 0; i--) {
    if (v[i] == 1)
      st = 1;
    if (st) {
      ct++;
      sum += v[i];
    }
  }
  // cout << ct << " " << sum << nl;
  cout << ct - sum << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}