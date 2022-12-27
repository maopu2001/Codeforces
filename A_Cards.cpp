#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, d0 = 0, d1 = 0;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'z')
      d0++;
    if (s[i] == 'n')
      d1++;
  }
  for (int i = 0; i < d1; i++)
    cout << 1 << " ";
  for (int i = 0; i < d0; i++)
    cout << 0 << " ";
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  // cin >> _;
  // for (int i = 1; i <= _; ++i)
  solve(T);
  return 0;
}