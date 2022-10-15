#include <bits/stdc++.h>
using namespace std;

#define int ll
using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define p1 first
#define p2 second
#define vc vector<int>
#define vvc vector<vc>

#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define FOR(i, a) for (int i = 0; i < int(a); ++i)
#define FOR3(i, a, b) for (int i = a; i <= int(b); ++i)
#define FOR4(i, a, b, c) for (int i = a; i <= int(b); i += (c))
#define FOR_R(i, a) for (int i = (a)-1; i >= int(0); --i)
#define FOR3_R(i, a, b) for (int i = (b)-1; i >= int(a); --i)
#define FOR4_R(i, a, b, c) for (int i = (b)-1; i >= int(a); i -= (c))

#define all(x) x.begin(), x.end()
#define len(x) int(x.size())
#define elif else if

#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())

int SUM(vc &A)
{
  int sum = 0;
  for (auto a : A)
    sum += a;
  return sum;
}
void print(vc &A)
{
  for (auto i : A)
    cout << i << " ";
  cout << nl;
}

void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  int n = 1, m = 1;
  if (s1.size() > 1)
    n = s1.size();
  if (s2.size() > 1)
    m = s2.size();
  if (s1[s1.size() - 1] == 'S')
    n = -n;
  if (s2[s2.size() - 1] == 'S')
    m = -m;
  if (s1 == "M")
    n = 0;
  if (s2 == "M")
    m = 0;
  // cout << n << " " << m << nl;
  if (n < m)
    cout << "<" << nl;
  else if (n > m)
    cout << ">" << nl;
  else
    cout << "=" << nl;
}

int32_t main()
{
  // cout << setprecision(2) << fixed;

  int T;
  cin >> T;
  FOR(_, T)
  solve();
  return 0;
}