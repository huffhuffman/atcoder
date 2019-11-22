#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;

  int k;
  cin >> k;
  vector<int> p(k);
  for (int i = 0; i < k; i++) {
    cin >> p[i];
  }

  string ans = "YES";
  for (int i = 0; i < k; i++) {
    if (p[i] == a || p[i] == b) {
      ans = "NO";
      break;
    }
  }

  sort(p.begin(), p.end());
  p.erase(unique(p.begin(), p.end()), p.end());
  if (k != p.size()) {
    ans = "NO";
  }

  cout << ans << endl;

  return 0;
}