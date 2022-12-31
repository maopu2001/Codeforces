#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s;
  cin >> s;
  char mx = 'a';
  vector<char> v;
  for (int i = 0; i < s.size(); i++) {
    v.push_back(s[i]);
    mx = max(s[i], mx);
  }
  while (v.size() != 1) {
    if (v[0] == mx)
      v.erase(v.begin()), mx--;
    else if (v[v.size() - 1] == mx)
      v.erase(--v.end()), mx--;
    else {
      cout << "NO" << nl;
      return;
    }
  }
  if (v[0] == 'a' && mx == 'a')
    cout << "YES" << nl;
  else
    cout << "NO" << nl;
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