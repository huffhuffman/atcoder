#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<P> ts(n);  // <s, t>の配列
  for (int i = 0; i < n; i++) {
    int x, l;
    cin >> x >> l;

    int s = x - l;
    int t = x + l;
    ts[i] = P(t, s);
  }

  sort(ts.begin(), ts.end());

  int ans = 0;
  int r = -1000000000; // 右端 
  for (int i = 0; i < n; i++) {
    if (r <= ts[i].second) {
      ans++;
      r = ts[i].first;
    }
  }

  cout << ans << endl;

  return 0;
}