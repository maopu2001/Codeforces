#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  vector<int> a(3), b(3);
  for (int i = 0; i < 3; i++)
    cin >> a[i];
  for (int i = 0; i < 3; i++)
    cin >> b[i];
  cin >> n;
  int ct = ceil(accumulate(a.begin(), a.end(), 0) / 5.0) +
           ceil(accumulate(b.begin(), b.end(), 0) / 10.0);
  if (ct > n)
    cout << "NO" << nl;
  else
    cout << "YES" << nl;
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