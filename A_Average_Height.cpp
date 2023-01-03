#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x;
  cin >> n;
  vector<int> o, e;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x % 2 == 0)
      o.push_back(x);
    else
      e.push_back(x);
  }
  for (int i : o)
    cout << i << " ";
  for (int i : e)
    cout << i << " ";
  cout << nl;
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