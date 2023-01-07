#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x, mx;
  vector<int> e(3, 0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    e[i % 3] += x;
  }
  mx = find(e.begin(), e.end(), *max_element(e.begin(), e.end())) - e.begin();

  if (mx == 0)
    cout << "chest" << nl;
  else if (mx == 1)
    cout << "biceps" << nl;
  else
    cout << "back" << nl;

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