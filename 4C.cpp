#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

unordered_map<string, int> mp;

void solve(int T) {
  string s;
  cin >> s;
  if (mp.find(s) == mp.end()) {
    mp.insert({s, 1});
    cout << "OK" << nl;
  } else {
    cout << s + to_string(mp[s]) << nl;
    mp[s]++;
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