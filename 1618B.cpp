#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<string> v(n - 2);
  bool check = 1;

  for (int i = 0; i < v.size(); i++)
    cin >> v[i];

  cout << v[0][0];

  for (int i = 1; i < v.size(); i++) {
    if (v[i][0] == v[i - 1][1])
      cout << v[i - 1][1];
    else {
      check = 0;
      cout << v[i - 1][1];
      cout << v[i][0];
    }
  }
  cout << v[n - 3][1];
  if (check)
    cout << 'a';
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