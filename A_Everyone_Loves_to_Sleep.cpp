#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, h, m, ah, am;
    set<int> alarm;
    cin >> n >> h >> m;

    for (int i = 0; i < n; i++)
    {
      int ah, am;
      cin >> ah >> am;
      alarm.insert(ah);
      alarm.insert(am);
    }
  }
}