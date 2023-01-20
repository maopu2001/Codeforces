#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

bool value(const pair<int, int> &a, const pair<int, int> &b) {
  return a.second < b.second;
}

void solve(int T) {
  int n, x;
  cin >> n;
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    cin >> x;
    mp[x]++;
  }
  cout << (*max_element(mp.begin(), mp.end(), value)).second << nl;
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