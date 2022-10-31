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
  string s;
  cin >> s;
  int capital = 0;
  for (int i = 1; i < len(s); i++)
    if (s[i] >= 65 && s[i] <= 90)
      capital++;

  if (capital == len(s) - 1)
  {
    if (s[0] >= 65 && s[0] <= 90)
      cout << (char)tolower(s[0]);
    else
      cout << (char)toupper(s[0]);
    for (int i = 1; i < len(s); i++)
      cout << (char)tolower(s[i]);
    cout << nl;
  }
  else
    cout << s << nl;
}

int32_t main()
{
  // cout << setprecision(2) << fixed;

  // int T;
  // cin >> T;
  // FOR(_, T)
  solve();
  return 0;
}