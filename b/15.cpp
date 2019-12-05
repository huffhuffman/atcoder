#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);

  double cnt = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] > 0) {
      cnt++;
    }

    sum += a[i];
  }

  int ans = ceil(sum / cnt);

  cout << ans << endl;

  return 0;
}