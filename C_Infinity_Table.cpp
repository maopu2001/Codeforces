#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  int sq = sqrt(n);
  int a1 = (sq * sq) + 1;
  int a2 = (sq + 1) * (sq + 1);
  int a3 = (a1 + a2) / 2;
  if (sq * sq == n)
    cout << sq << " " << 1 << nl;
  else if (n == a3)
    cout << sq + 1 << " " << sq + 1 << endl;
  else if (n < a3)
    cout << n - a1 + 1 << " " << sq + 1 << endl;
  else
    cout << sq + 1 << " " << a2 - n + 1 << endl;
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