#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> a(26, 0);

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (char c : s)
      a[c - 'a']++;
  }
  for (int i = 0; i < 26; i++)
    if (a[i] % n != 0) {
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
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}