#include <iostream>
using namespace std;

#define int ll
using ll = long long;

void solve()
{
  string s;
  int ct=0;
  cin >> s;
  int n = s.size();
  for(int i=0;i<n;i++)
  {
  	for(int j=i;j<n;j++)
  	{
  		for(int k=j;k<n;k++)
 		 {
  			if(s[i]=='Q' && s[j]=='A' && s[k]=='Q')
  			ct++;
  		}
  	}
  }
  cout<< ct << endl;
}

int32_t main()
{
  solve();
  return 0;
}