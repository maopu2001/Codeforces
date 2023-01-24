#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> s(n), f(n);
  for (int i = 0; i < n; i++)
    cin >> s[i];
  for (int i = 0; i < n; i++)
    cin >> f[i];
  for (int i = 0; i < n; i++)
    cout << (i == 0 ? f[i] - s[i] : min(f[i] - s[i], f[i] - f[i - 1])) << " ";
  cout << nl;
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