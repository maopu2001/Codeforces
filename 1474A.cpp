#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  string a, b = "1";
  cin >> a;
  for (int i = 0; i < n - 1; i++) {
    if ('1' + a[i + 1] != b[i] + a[i])
      b.push_back('1');
    else
      b.push_back('0');
  }
  cout << b << nl;
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