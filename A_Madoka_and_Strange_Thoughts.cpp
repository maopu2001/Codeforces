#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, ans;
    cin >> n;
    int x = n / 6;
    ans = x * 16;
    if (n % 6 == 1)
      ans += 1;
    else if (n % 6 == 2)
      ans += 4;
    else if (n % 6 == 3)
      ans += 7;
    else if (n % 6 == 4)
      ans += 10;
    else if (n % 6 == 5)
      ans += 11;

    cout << ans << endl;
  }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n, ct = 0;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//       for (int j = i; j <= n; j++)
//       {
//         // cout << i << " " << j << endl;
//         if (i == j)
//           ct++;
//         else if (i * j <= 3 * __gcd(i, j) * __gcd(i, j))
//           ct += 2;
//       }
//     }
//     cout << ct << endl;
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n;
//     cin >> n;
//     int ans = n + 2 * (n / 2) + 2 * (n / 3);
//     cout << ans << endl;
//   }
// }
