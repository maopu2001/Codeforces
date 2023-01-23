#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  vector<int> v;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      int ct = i;
      while (ct < s.size() - 1 && s[ct + 1] == '1')
        ct++;
      v.push_back(ct - i + 1);
      i = ct;
    }
  }
  sort(v.begin(), v.end(), greater<>());
  int ans = 0;
  for (int i = 0; i < v.size(); i += 2)
    ans += v[i];

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