#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, odd = 0, even = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] % 2 == 0)
      even++;
    else
      odd++;
  }

  if (odd % 2 == 0 && even % 2 == 0)
  {
    cout << "YES" << endl;
    return;
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i + 1] - a[i] == 1)
    {
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
  return;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}