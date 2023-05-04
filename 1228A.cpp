#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int l, r;
  cin >> l >> r;
  for (int i = l; i <= r; i++) {
    unordered_set<int> st;
    int m = i;
    while (m > 0) {
      st.insert(m % 10);
      m /= 10;
    }
    if ((int)st.size() == (int)log10(i) + 1) {
      cout << i << nl;
      return;
    }
  }
  cout << -1 << nl;
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