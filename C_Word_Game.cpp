#include <bits/stdc++.h>
using namespace std;

int check(string s, map<string, int> &m)
{
  int ans = 0;
  if (m.find(s) != m.end())
  {
    if (m[s] == 1)
      ans += 3;
    if (m[s] == 2)
      ans++;
  }
  return ans;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    map<string, int> m;
    vector<string> arr(n), brr(n), crr(n);
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < n; j++)
      {
        string s;
        cin >> s;
        if (i == 0)
          arr[j] = s;
        else if (i == 1)
          brr[j] = s;
        else if (i == 2)
          crr[j] = s;
        m[s]++;
      }
    }
    for (int i = 0; i < 3; ++i)
    {
      int sum = 0;
      for (int j = 0; j < n; ++j)
      {
        if (i == 0)
          sum += check(arr[j], m);
        if (i == 1)
          sum += check(brr[j], m);
        if (i == 2)
          sum += check(crr[j], m);
        if (j == n - 1)
          cout << sum << " ";
      }
    }
    cout << endl;
  }
}
