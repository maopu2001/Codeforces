#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for (int &e : a)
    cin >> e;
  for (int &e : b)
    cin >> e;

  sort(a.begin(), a.end());

  for (int e : b) {
    if (upper_bound(a.begin(), a.end(), e) == a.end())
      cout << n << " ";
    else {
      cout << upper_bound(a.begin(), a.end(), e) - a.begin() << " ";
    }
  }
  cout << nl;
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