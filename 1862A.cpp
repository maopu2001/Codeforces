#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int r, c;
  cin >> r >> c;
  string input[r];
  deque<char> s{'v', 'i', 'k', 'a'};
  for (auto &i : input)
    cin >> i;

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++) {
      if (input[j][i] == s.front()) {
        s.pop_front();
        if ((int)s.size() == 0) {
          cout << "YES" << nl;
          return;
        }
        break;
      }
    }
  }
  cout << "NO" << nl;
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