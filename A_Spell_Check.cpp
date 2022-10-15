#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s, check = "Timru";
    int n;
    cin >> n >> s;
    if (n == 5)
    {
      sort(s.begin(), s.end());
      if (s == check)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    else
      cout << "NO" << endl;
  }
}