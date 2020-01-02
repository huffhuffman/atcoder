#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll sum = 0;

  ll ans1 = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    if (i % 2 == 0 && sum <= 0) {
      ans1 += -1 * sum + 1;
      sum = 1;
    } else if (i % 2 != 0 && sum >= 0) {
      ans1 += sum + 1;
      sum = -1;
    }
  }
  sum = 0;

  ll ans2 = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
    if (i % 2 != 0 && sum <= 0) {
      ans2 += sum * -1 + 1;
      sum = 1;
    } else if (i % 2 == 0 && sum >= 0) {
      ans2 += sum + 1;
      sum = -1;
    }
  }

  ll ans = min(ans1, ans2);

  cout << ans << endl;

  return 0;
}