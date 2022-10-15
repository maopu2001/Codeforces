#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, sr;
  cin >> s;
  sr = s;
  reverse(sr.begin(), sr.end());
  cout << s << sr << endl;
  return 0;
}