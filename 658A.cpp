#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, c;
  cin >> n >> c;
  vector<int> p(n), t(n);
  for (int &i : p)
    cin >> i;
  for (int &i : t)
    cin >> i;

  int timeL = 0, pointsL = 0;
  for (int i = 0; i < t.size(); i++) {
    timeL += t[i];
    pointsL += max(0, p[i] - c * timeL);
  }

  int timeR = 0, pointsR = 0;
  for (int i = t.size() - 1; i >= 0; i--) {
    timeR += t[i];
    pointsR += max(0, p[i] - c * timeR);
  }

  if (pointsL > pointsR)
    cout << "Limak" << nl;
  else if (pointsL < pointsR)
    cout << "Radewoosh" << nl;
  else
    cout << "Tie" << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, i;
  // cin >> _;
  // for (i = 1; i <= _; ++i)
  solve(i);
  return 0;
}