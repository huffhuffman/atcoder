#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, d, k;
  cin >> n >> d >> k;
  vector<int> l(d), r(d);
  vector<int> s(k), t(k);
  for (int i = 0; i < d; i++) {
    cin >> l[i] >> r[i];
  }
  for (int i = 0; i < k; i++) {
    cin >> s[i] >> t[i];
  }

  vector<int> ans(k);
  for (int i = 0; i < k; i++) {
    bool moveR = s[i] < t[i];  //右に移動したいか

    int goal = t[i];

    int cnt = 1;
    int crr = s[i];  // 現在位置
    for (int j = 0; j < d; j++) {
      if (l[j] <= crr && crr <= r[j]) {
        if (l[j] <= goal && goal <= r[j]) {
          ans[i] = cnt;
          break;
        } else {
          crr = moveR ? r[j] : l[j];
          cnt++;
        }
      } else {
        cnt++;
      }
    }
  }

  for (int i = 0; i < k; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}