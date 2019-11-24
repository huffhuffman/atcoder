#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }

  set<int> s;  // 行先がnな島のset
  for (int i = 0; i < m; i++) {
    if (b[i] == n - 1) {
      s.insert(a[i]);
    }
  }

  string ans = "IMPOSSIBLE";
  for (int i = 0; i < m; i++) {
    if (a[i] == 0) {
      if (s.find(b[i]) != s.end()) {
        ans = "POSSIBLE";
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}