#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, a, b, x;
  cin >> n >> a >> b;
  vector<int> v(n);
  for (int i = 0; i < a; i++) {
    cin >> x;
    if (x <= n)
      v[x - 1] = 1;
  }
  for (int i = 0; i < b; i++) {
    cin >> x;
    if (x <= n)
      v[x - 1] = 2;
  }
  for (int i : v)
    cout << i << " ";
  cout << nl;
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