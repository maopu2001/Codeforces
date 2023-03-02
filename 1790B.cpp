#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, s, r;
  cin >> n >> s >> r;
  vector<int> dice(n);
  dice[0] = s - r;
  for (int i = 1; i < n; i++)
    dice[i] = r / (n - 1);
  int remain = r % (n - 1);
  for (int i = 1; i < n && remain != 0; i++) {
    dice[i]++;
    remain--;
  }
  for (int i : dice)
    cout << i << " ";
  cout << nl;
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