#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

void solve(int T) {
  int n;
  cin >> n;
  vector<int> v(n), b;
  set<int> st;
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n; i++) {
    if (st.find(v[i]) == st.end())
      st.insert(v[i]);
    else
      b.push_back(v[i]);
  }
  sort(b.begin(), b.end());

  for (int ele : st)
    cout << ele << " ";
  for (int ele : b)
    cout << ele << " ";

  cout << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  cin >> _;
  for (int i = 1; i <= _; ++i)
    solve(T);
  return 0;
}