#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define test \
  int t;     \
  cin >> t;  \
  while (t--)
#define nl endl
#define newline cout << nl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define CIN(v)       \
  for (auto &it : v) \
    cin >> it;
#define COUT(v)          \
  for (auto &it : v)     \
    cout << it << space; \
  newline
#define vi vector<int>
#define vl vector<ll>
#define pb push_back

int main()
{
  test
  {
    int n;
    cin >> n;
    vi hash(n);
    string line;
    cin >> line;
    for (int i = 1; i <= n; ++i)
    {
      hash[i] = i - 1;
    }
    for (int i = 1; i <= n; ++i)
    {
      int sum = 0;
      for (int j = 1; j <= n; ++j)
      {
        if (line[j] == 'L')
          sum += hash[j];
        else
          sum += (n - hash[j]);
      }
      cout << sum << " ";
    }
    newline;
  }
}