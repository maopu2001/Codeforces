#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, t;
  vector<int> cnt(5);
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> t;
    cnt[t]++;
  }

  int ans = 0;

  ans += cnt[4], cnt[4] = 0;
  ans += cnt[3], cnt[1] = max(cnt[1] - cnt[3], 0), cnt[3] = 0;
  ans += cnt[2] / 2, cnt[2] %= 2;
  if (cnt[2])
    ans++, cnt[2] = 0, cnt[1] = max(cnt[1] - 2, 0);
  ans += (cnt[1] + 3) / 4;

  cout << ans << nl;
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