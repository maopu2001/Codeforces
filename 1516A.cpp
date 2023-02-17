#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  while (k--) {
    for (int j = 0; j < n - 1; j++) {
      if (v[j] > 0) {
        v[j]--, v[n - 1]++;
        break;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
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
    solve(i);
  return 0;
}