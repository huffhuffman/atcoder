#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n;

  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  cin >> m;
  vector<int> p(m), x(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i] >> x[i];
    p[i]--;
  }

  for (int i = 0; i < m; i++) {
    int idx = p[i];

    int tmp = t[idx];
    t[idx] = x[i];

    int ans = accumulate(t.begin(), t.end(), 0);

    cout << ans << endl;

    t[idx] = tmp;
  }

  return 0;
}