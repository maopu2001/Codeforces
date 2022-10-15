#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;
    if (x % 2 == y % 2)
    {
      cout << "Tonya";
    }
    else
    {
      cout << "Burenka";
    }
    cout << endl;
  }
  return 0;
}