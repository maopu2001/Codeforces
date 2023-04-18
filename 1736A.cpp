#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  int ans1 = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i])
      ans1++;
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ans2 = 1;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i])
      ans2++;
  }

  cout << min(ans1, ans2) << nl;
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