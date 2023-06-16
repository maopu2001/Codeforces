#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n, m;
  cin >> n;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;
  cin >> m;
  vector<int> b(m);
  for (int &x : b)
    cin >> x;

  int maxa = *max_element(a.begin(), a.end());
  int maxb = *max_element(b.begin(), b.end());

  cout << (maxa >= maxb ? "Alice" : "Bob") << nl;
  cout << (maxa > maxb ? "Alice" : "Bob") << nl;
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