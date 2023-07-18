#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string s, s1, ck = "heidi";
  cin >> s;
  int i = 0;
  for (int c : s) {
    if (c == ck[i] && i < 5) {
      s1.push_back(c);
      i++;
    }
  }
  cout << (s1 == ck ? "YES" : "NO") << nl;
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