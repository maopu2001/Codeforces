#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, h, m, ah, am, sleep, ans = 24 * 60;
    cin >> n >> h >> m;
    sleep = h * 60 + m;

    for (int i = 0; i < n; i++) {
      int ah, am;
      cin >> ah >> am;
      int cal_ans = (ah * 60 + am) - sleep;
      if (cal_ans < 0)
        cal_ans += 24 * 60;
      ans = min(ans, cal_ans);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
  }
}