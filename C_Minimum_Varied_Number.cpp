#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int num, sum = 0, i = 9;
    vector<int> ans;
    cin >> num;
    while (sum != num)
    {
      if (sum + i <= num)
      {
        ans.push_back(i);
        sum += i;
      }
      --i;
    }
    reverse(ans.begin(), ans.end());
    for (int i : ans)
      cout << i;
    cout << endl;
  }
}