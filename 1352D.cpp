#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, x;
  cin >> n;
  deque<int> q;
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push_back(x);
  }

  int ct = 1, suma = 0, sumb = 0, pa = 0, pb = 0;
  bool ck = 0;
  while (q.size() != 0) {
    if (!ck && pa > pb)
      pb = 0, ck = 1, ct++;
    if (ck && pb > pa)
      pa = 0, ck = 0, ct++;

    if (!ck) {
      suma += q.front(), pa += q.front();
      q.pop_front();
    } else {
      sumb += q.back(), pb += q.back();
      q.pop_back();
    }
  }
  cout << ct << " " << suma << " " << sumb << nl;
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