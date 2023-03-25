#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  set<int> st;
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (st.find(x) == st.end())
      st.insert(x);
    else
      st.insert(-x);
  }
  cout << int(st.size()) << nl;
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