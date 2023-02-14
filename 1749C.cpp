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
  sort(v.begin(), v.end());

  for (int i = n; i >= 0; i--) {
    int ct = 0;
    for (int j = n; j > ct; j--) {
      if (i - ct + 1 > v[j - 1])
        ct++;
    }
    if (i == ct) {
      cout << i << nl;
      return;
    }
  }
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(i);
  return 0;
}
