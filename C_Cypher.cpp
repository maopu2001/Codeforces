#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int w, input;
    cin >> w;
    int final[w], ans[w];
    string perf;
    for (int i = 0; i < w; i++)
    {
      cin >> final[i];
    }
    for (int i = 0; i < w; i++)
    {
      int count = 0;
      cin >> input;
      cin >> perf;
      for (int j = 0; j < input; j++)
      {
        if (perf[j] == 'D')
          count++;
        else
          count--;
      }
      int a = final[i] + count;
      if (a > 9 && a >= 0)
        ans[i] = a % 10;
      else if (a < 0)
        ans[i] = a + 10;
      else
        ans[i] = a;
    }
    for (int i = 0; i < w; i++)
      cout << ans[i] << " ";
    cout << endl;
  }
  return 0;
}