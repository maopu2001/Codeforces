#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  string s;
  cin >> n >> s;
  vector<vector<int>> alphabet(26);
  for (int i = 0; i < n; i++) {
    alphabet[s[i] - 'a'].push_back(i);
  }
  
  for (int i = 0; i < 26; i++) {
    if (alphabet[i].size() > 0)
      for (int j = 0; j < alphabet[i].size() - 1; j++) {
        if ((alphabet[i][j + 1] - alphabet[i][j]) % 2 != 0) {
          cout << "NO" << nl;
          return;
        }
      }
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