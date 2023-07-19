#include <bits/stdc++.h>

using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  getchar();
  vector<int> x, y;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (getchar() == '*') {
        x.push_back(i);
        y.push_back(j);
      }
    }
    getchar();
  }

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  if (x[0] == x[1]) {
    cout << x[2] + 1;
  } else
    cout << x[0] + 1;
  cout << ' ';

  if (y[0] == y[1]) {
    cout << y[2] + 1;
  } else
    cout << y[0] + 1;
}

int main() {
  // cout << setprecision(2) << fixed;
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}
