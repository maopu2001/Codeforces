#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string S;
  cin >> S;
  bool u = 0, s = 0, d = 0;
  for (char i : S) {
    if ('a' <= i && i <= 'z')
      s = 1;
    if ('A' <= i && i <= 'Z')
      u = 1;
    if ('0' <= i && i <= '9')
      d = 1;
  }
  cout << (S.size() >= 5 && u && s && d ? "Correct" : "Too weak") << nl;
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