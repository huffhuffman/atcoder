#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  int ans = *min_element(t.begin(), t.end());
  cout << ans << endl;

  return 0;
}