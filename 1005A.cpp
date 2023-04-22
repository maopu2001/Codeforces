#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x;
  cin >> n;
  vector<int> v;
  int p = -1;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x == 1 && p != -1)
      v.push_back(p);
    p = x;
  }
  v.push_back(p);
  cout << v.size() << nl;
  for (int i : v)
    cout << i << " ";
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