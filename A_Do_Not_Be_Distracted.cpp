#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

using pr = pair<ll, ll>;
using vc = vector<ll>;
using vvc = vector<vc>;

#define pq priority_queue
#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define FOR(i, a) for (ll i = 0; i < ll(a); ++i)
#define FOR3(i, a, b) for (ll i = a; i <= ll(b); ++i)
#define FOR4(i, a, b, c) for (ll i = a; i <= ll(b); i += (c))
#define FOR_R(i, a) for (ll i = (a)-1; i >= ll(0); --i)
#define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)
#define FOR4_R(i, a, b, c) for (ll i = (b)-1; i >= ll(a); i -= (c))

#define all(x) x.begin(), x.end()
#define len(x) ll(x.size())
#define elif else if

// void solve()
// {
//   ll n;
//   string s;
//   vector<char> v;
//   cin >> n >> s;

//   char p = s[0];
//   for (ll i = 0; i < n; i++)
//   {
//     if (s[i] != p)
//     {
//       v.push_back(p);
//       p = s[i];
//     }
//   }
//   v.push_back(s[n - 1]);

//   FOR(i, n - 1)
//   {
//     FOR3(j, i + 1, n - 1)
//     {
//       if (v[i] == v[j])
//       {
//         no;
//         return;
//       }
//     }
//   }
//   yes;
// }
void solve()
{
  int n;
  string s, d;
  cin >> n >> s;
  char p = s[0];
  int k = 0, check = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] != p)
    {
      d[k] = p;
      p = s[i];
      k++;
    }
    for (int j = 0; j < k; j++)
    {
      if (s[i] == d[j])
      {
        no;
        return;
      }
    }
  }
  yes;
}

int main()
{
  // cout << fixed << setprecision(15);
  ll T;
  cin >> T;
  FOR(_, T)
  solve();
  return 0;
}