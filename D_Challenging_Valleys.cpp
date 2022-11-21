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

void solve() {
  int n;
  cin >> n;
  vc v(n);
  CIN(v);

  if (n == 1) {
    yes;
    return;
  }
  FOR(i, n - 1) {
    if (v[i] < v[i + 1]) {
      for (int j = i; j < n - 1; j++) {
        if (v[j] > v[j + 1]) {
          no;
          return;
        }
      }
      yes;
      return;
    }
    if (v[i] > v[i + 1]) {
      for (int j = i; j < n - 1; j++) {
        if (v[j] < v[j + 1]) {
          for (int k = j; k < n - 1; k++) {
            if (v[k] > v[k + 1]) {
              no;
              return;
            }
          }
          yes;
          return;
        }
      }
    }
  }
  yes;
}

int32_t main() {
  // cout << setprecision(2) << fixed;

  int _;
  cin >> _;
  while (_--)
    solve();
  return 0;
}