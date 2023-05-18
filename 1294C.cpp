#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, ct = 2;
  cin >> n;
  set<int> used;
  while (ct--)
    for (int i = 2; i * i <= n; ++i) {
      if (n % i == 0 && used.count(i) == 0) {
        n /= i;
        used.insert(i);
        break;
      }
    }

  if (used.size() < 2 || used.count(n) != 0 || n == 1) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    for (auto it : used)
      cout << it << " ";
    cout << n << endl;
  }
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