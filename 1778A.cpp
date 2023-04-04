#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  int sum = accumulate(v.begin(), v.end(), 0);

  if (sum == n) {
    cout << sum - 4 << nl;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (v[i] == -1 && v[i - 1] == -1 && i != 0) {
      cout << sum + 4 << nl;
      return;
    }
  }

  cout << sum << nl;
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