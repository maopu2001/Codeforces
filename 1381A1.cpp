#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  string a, b;
  cin >> n >> a >> b;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      if (i > 0)
        v.push_back(i + 1);
      v.push_back(1);
      if (i > 0)
        v.push_back(i + 1);
    }
  }

  cout << v.size() << " ";
  for (int x : v)
    cout << x << " ";
  cout << nl;
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
