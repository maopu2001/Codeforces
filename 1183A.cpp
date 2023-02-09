#include <bits/stdc++.h>
using namespace std;

#define nl endl
typedef long long ll;
const int MOD = 1e9 + 7;

int check(int n) {
  int sum = 0, N = n;
  for (int i = 0; i <= ceil(log10(N)); i++) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

void solve(int T) {
  int n;
  cin >> n;
  while (check(n) % 4 != 0)
    n++;
  cout << n << nl;
}

int main() {
  // cout << setprecision(2) << fixed;
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int _, T;
  // cin >> _;
  // for (int i = 1; i <= _; ++i)
  solve(T);
  return 0;
}