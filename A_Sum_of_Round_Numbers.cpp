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

#define FOR_subset(t, s) for (ll t = s; t >= 0; t = (t == 0 ? -1 : (t - 1) & s))

#define all(x) x.begin(), x.end()
#define len(x) ll(x.size())
#define elif else if

#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define fst first
#define sec second

#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end())

ll SUM(vc &A)
{
  ll sum = 0;
  for (auto &&a : A)
    sum += a;
  return sum;
}

// ll binary_search(function<bool(ll)> check, ll ok, ll ng)
// {
//   assert(check(ok));
//   while (abs(ok - ng) > 1)
//   {
//     auto x = (ng + ok) / 2;
//     if (check(x))
//       ok = x;
//     else
//       ng = x;
//   }
//   return ok;
// }

// double binary_search_real(F check, double ok, double ng, int iter = 100)
// {
//   FOR(iter)
//   {
//     double x = (ok + ng) / 2;
//     if (check(x))
//     {
//       ok = x;
//     }
//     else
//     {
//       ng = x;
//     }
//   }
//   return (ok + ng) / 2;
// }

// vi s_to_vi(const string &S, char first_char)
// {
//   vi A(S.size());
//   FOR(i, S.size()) { A[i] = S[i] - first_char; }
//   return A;
// }

// vector<T> cumsum(vector<T> &A, int off = 1)
// {
//   int N = A.size();
//   vector<T> B(N + 1);
//   FOR(i, N) { B[i + 1] = B[i] + A[i]; }
//   if (off == 0)
//     B.erase(B.begin());
//   return B;
// }

// vc<CNT> bincount(const vc<T> &A, int size)
// {
//   vc<CNT> C(size);
//   for (auto &&x : A)
//   {
//     ++C[x];
//   }
//   return C;
// }

// vector<int> argsort(const vector<T> &A)
// {
//   // stable
//   vector<int> ids(A.size());
//   iota(all(ids), 0);
//   sort(all(ids),
//        [&](int i, int j)
//        { return A[i] < A[j] || (A[i] == A[j] && i < j); });
//   return ids;
// }

// // A[I[0]], A[I[1]], ...

// vc<T> rearrange(const vc<T> &A, const vc<int> &I)
// {
//   int n = len(I);
//   vc<T> B(n);
//   FOR(i, n)
//   B[i] = A[I[i]];
//   return B;
// }

void solve()
{
  int n, ct = 0;
  vc ans(4);
  cin >> n;
  ans[0] = n - n % 1000;
  ans[1] = (n % 1000) - (n % 1000) % 100;
  ans[2] = ((n % 1000) % 100) - ((n % 1000) % 100) % 10;
  ans[3] = (((n % 1000) % 100) % 10) % 10;
  for (int i : ans)
  {
    if (i != 0)
      ct++;
  }
  cout << ct << nl;
  for (int i : ans)
  {
    if (i != 0)
      cout << i << " ";
  }
  cout << nl;
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