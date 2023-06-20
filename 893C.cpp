#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

const int N = 1e5 + 5;
int a[N];
vector<int> adj[N];
bool vis[N];

int dfs(int i) {
  vis[i] = true;
  int val = a[i];
  for (int it : adj[i]) {
    if (vis[it])
      continue;
    val = min(dfs(it), val);
  }
  return val;
}

void solve(int T) {
  int n, m, x, y;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    cin >> a[i];

  for (int i = 1; i <= m; i++) {
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    if (!vis[i])
      ans += dfs(i);
  }
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