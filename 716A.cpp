#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, c, x;
  cin >> n >> c;
  vector<int> v;
  cin >> x;
  v.push_back(x);
  for (int i = 1; i < n; i++) {
    cin >> x;
    if (x - *(--v.end()) > c) {
      v.clear();
    }
    v.push_back(x);
  }
  cout << (int)v.size() << nl;
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