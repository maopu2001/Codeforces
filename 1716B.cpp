#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    v[i] = i + 1;

  cout << n << nl;
  for (int ele : v)
    cout << ele << " ";
  cout << nl;
  
  for (int i = n - 1; i > 0; i--) {
    swap(v[i], v[i - 1]);
    for (int ele : v)
      cout << ele << " ";
    cout << nl;
  }
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