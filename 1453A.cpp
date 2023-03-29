#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, x, ans = 0;
  cin >> n >> m;
  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    cin >> x;
    st.insert(x);
  }
  for (int i = 0; i < m; i++) {
    cin >> x;
    if (st.find(x) != st.end())
      ans++;
  }
  cout << ans << nl;
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