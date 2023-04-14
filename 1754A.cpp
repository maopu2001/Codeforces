#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  string s;
  cin >> n >> s;
  int check = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'Q')
      check++;
    else {
      check--;
      if (check < 0)
        check = 0;
    }
  }
  if (check == 0)
    cout << "Yes" << nl;
  else
    cout << "No" << nl;
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