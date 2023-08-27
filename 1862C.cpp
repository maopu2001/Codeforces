#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  if (a[1] != n) {
    cout << "NO" << '\n';
    return;
  }
  vector<int> b;
  for (int i = n; i >= 1; i--) {
    while (b.size() < a[i]) {
      b.push_back(i);
    }
  }

  bool meow = true;
  for (int i = 1; i <= n; i++) {
    if (a[i] != b[i - 1]) {
      cout << "NO" << '\n';
      meow = false;
      break;
    }
  }
  if (meow) {
    cout << "YES" << '\n';
  }
}

int main() {
  // cout << setprecision(2) << fixed;
  // ios_base :: sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  cin >> _;
  for (i = 1; i <= _; ++i)
    solve(i);
  return 0;
}