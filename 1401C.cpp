#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int &e : a)
    cin >> e;
  b = a;
  sort(b.begin(), b.end());
  int m = *min_element(a.begin(), a.end());
  for (int i = 0; i < n; i++)
    if (a[i] != b[i] && a[i] % m != 0) {
      cout << "NO" << nl;
      return;
    }
  cout << "YES" << nl;
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