#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m, x;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  vector<int> pile;
  pile.push_back(0);
  for (int i = 0; i < n; i++) {
    int x = v[i];
    while (x--)
      pile.push_back(i + 1);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> x;
    cout << pile[x] << nl;
  }
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