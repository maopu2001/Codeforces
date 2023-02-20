#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string a, b;
  cin >> a >> b;
  vector<string> as, bs;
  for (int i = 0; i < a.size(); i++) {
    for (int j = 1; j < a.size() - i + 1; j++) {
      string a1 = a.substr(i, j);
      as.push_back(a1);
    }
  }

  for (int i = 0; i < b.size(); i++) {
    for (int j = 1; j < b.size() - i + 1; j++) {
      string b1 = b.substr(i, j);
      bs.push_back(b1);
    }
  }
  int ans = 0;
  for (auto aele : as) {
    for (auto bele : bs) {
      if (aele == bele)
        ans = max(ans, (int)aele.size());
    }
  }

  cout << a.size() + b.size() - 2 * ans << nl;
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