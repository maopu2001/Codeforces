#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    int n;
    cin >> n >> s1 >> s2;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
      if (s1[i] == s2[i])
        ans = true;
      else if (s1[i] == 'G' || s1[i] == 'B')
      {
        if (s2[i] == 'G' || s2[i] == 'B')
          ans = true;
        else
        {
          ans = false;
          break;
        }
      }
      else
      {
        ans = false;
        break;
      }
    }
    if (ans)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}