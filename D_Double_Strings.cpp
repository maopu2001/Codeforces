#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int ans[n] = {0};
    string s[n];
    for (int i = 0; i < n; i++)
    {
      cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        for (int k = 0; k < n; k++)
        {
          if (s[i] == s[j] + s[k])
            ans[i] = 1;
        }
      }
    }
    for (int i = 0; i < n; i++)
      cout << ans[i];
    cout << endl;
  }
  return 0;
}