#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int r, c, ans = 0;
  cin >> r >> c;
  vector<string> v(r);
  for (int i = 0; i < r; i++)
    cin >> v[i];

  for (int i = 0; i < r; i++) {
    bool check = true;
    for (int j = 0; j < c; j++)
      if (v[i][j] == 'S') {
        check = false;
        break;
      }
    if (check)
      for (int j = 0; j < c; j++) {
        if (v[i][j] == '.')
          v[i][j] = '*', ans++;
      }
  }

  for (int i = 0; i < c; i++) {
    bool check = true;
    for (int j = 0; j < r; j++) {
      if (v[j][i] == 'S') {
        check = false;
        break;
      }
    }
    if (check)
      for (int j = 0; j < r; j++) {
        if (v[j][i] == '.')
          ans++, v[j][i] = '*';
      }
  }

  cout << ans << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  //   cin >> _;
  //   for (int i = 1; i <= _; ++i)
  solve(T);
  return 0;
}