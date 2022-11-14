#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

#define pb push_back
#define p1 first
#define p2 second
#define pr pair<int, int>
#define vc vector<int>
#define si set<int>
#define mpi map<int, int>

#define nl endl
#define FOR(i, a) for (int i = 0; i < int(a); ++i)
#define FOR3(i, a, b) for (int i = a; i <= int(b); ++i)
#define FOR_R(i, a) for (int i = (a)-1; i >= int(0); --i)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

#define all(x) x.begin(), x.end()
#define len(x) int(x.size())
#define elif else if

#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())
#define SUM(v) accumulate(all(v), 0)

#define CIN(v)                                                                 \
  for (auto &it : v)                                                           \
    cin >> it;
#define COUT(v)                                                                \
  for (auto &it : v)                                                           \
    cout << it << " ";                                                         \
  cout << nl;

bool diverse(string s) {
  map<char, int> mp;
  int mx = 0;
  FOR(i, len(s)) {
    if (mp.find(s[i]) == mp.end())
      mp.insert({s[i], 1});
    else
      mp[s[i]]++;
    mx = max(mx, mp[s[i]]);
  }
  if (mx > len(mp))
    return false;

  return true;
}

void solve() {
  int n;
  string s;
  cin >> n >> s;
  int ans = 0;
  FOR(i, len(s)) {
    int ct = 0, mx = 0;
    vc v(10);
    FOR3(j, i, (len(s) - 1)) {
      int check = ++v[s[j] - '0'];
      if (check <= 10) {
        mx = max(mx, check);
        if (check == 1)
          ct++;
        if (ct >= mx)
          ans++;
      } else
        break;
    }
  }
  cout << ans << nl;
}

int32_t main() {
  // cout << setprecision(2) << fixed;

  int _;
  cin >> _;
  while (_--)
    solve();
  return 0;
}