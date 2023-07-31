#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  string tic[3];
  for (string &i : tic)
    cin >> i;

  for (int i = 0; i < 3; i++) {
    char ck = tic[i][0];
    if (tic[i][1] == ck && tic[i][2] == ck && ck != '.') {
      cout << ck << nl;
      return;
    }

    ck = tic[0][i];
    if (tic[1][i] == ck && tic[2][i] == ck && ck != '.') {
      cout << ck << nl;
      return;
    }
  }
  if (tic[1][1] == tic[0][0] && tic[2][2] == tic[0][0] && tic[0][0] != '.') {
    cout << tic[0][0] << nl;
    return;
  }
  if (tic[1][1] == tic[0][2] && tic[2][0] == tic[0][2] && tic[0][2] != '.') {
    cout << tic[0][2] << nl;
    return;
  }

  cout << "DRAW" << nl;
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