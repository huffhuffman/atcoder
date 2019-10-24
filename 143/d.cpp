#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int bgr(int idx) {}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());

  int ans = 0;
  for (int b = 0; b < n; b++) {
    for (int a = 0; a < b; a++) {
      int ab = l[a] + l[b];

      auto it = lower_bound(l.begin(), l.end(), ab);

      int ri = distance(l.begin(), it);
      int li = b + 1;

      ans += ri - li;
    }
  }

  cout << ans << endl;

  return 0;
}