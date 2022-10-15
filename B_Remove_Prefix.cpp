#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> v[i];
    }
    reverse(v.begin(), v.end());

    set<int> num;
    for (int i = 0; i < n; ++i)
    {
      if (num.count(v[i]) == 0)
        num.insert(v[i]);
      else
        break;
    }

    cout << n - num.size() << endl;
  }
}