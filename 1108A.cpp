#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  vector<int> v(4);
  for (int &i : v)
    cin >> i;
  for (int a : v)
    for (int b : v)
      if (v[0] <= a && a <= v[1] && v[2] <= b && b <= v[3] && a != b) {
        cout << a << " " << b << endl;
        return;
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