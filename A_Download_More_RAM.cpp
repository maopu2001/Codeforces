#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++)
    cin >> p[i].first;
  for (int i = 0; i < n; i++)
    cin >> p[i].second;

  sort(p.begin(), p.end());

  for (int i = 0; i < p.size(); i++)
    if (k >= p[i].first)
      k += p[i].second;
    else
      break;

  cout << k << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}