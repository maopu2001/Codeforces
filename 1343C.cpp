#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n), sub;
  vector<vector<int>> subList;
  bool sign = 1, pre = 1;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] < 0)
      sign = 0;
    else
      sign = 1;
    if (sign == pre || i == 0)
      sub.push_back(v[i]);
    else {
      subList.push_back(sub);
      sub.clear();
      sub.push_back(v[i]);
    }
    pre = sign;
  }
  subList.push_back(sub);

  ll sum = 0;
  for (auto it : subList) {
    sum += *max_element(it.begin(), it.end());
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