#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  int ans = 0;
  unordered_set<char> st;
  for (int i = 0; i < s.size(); i++) {
    st.insert(s[i]);
    if (st.size() > 3) {
      ans++;
      st.erase(st.begin(), st.end());
      st.insert(s[i]);
    }
  }
  if (st.size() != 0)
    ans++;
  cout << ans << nl;
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