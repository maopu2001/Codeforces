#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n * 2), ans(n * 2);
  for (int i = 0; i < n * 2; i++)
    cin >> v[i];
  sort(v.begin(), v.end());

  for (int i = 0; i < n * 2; i++) {
    if (i % 2 == 0)
      ans[i] = v[i / 2];
    else
      ans[i] = v[n + i / 2];
  }

  for (int i = 0; i < n * 2; i++)
    cout << ans[i] << " ";

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