#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

double Area(int a, int b) { return (b - a) * 0.5; }

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  unordered_set<double> st;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      st.insert(Area(v[i], v[j]));
    }
  }
  cout << st.size() << nl;
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