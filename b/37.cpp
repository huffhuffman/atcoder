#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;

  vector<int> a(n, 0), l(q), r(q), t(q);
  for (int i = 0; i < q; i++) {
    cin >> l[i] >> r[i] >> t[i];
  }

  for (int i = 0; i < q; i++) {
    for (int j = l[i] - 1; j < r[i]; j++) {
      a[j] = t[i];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }

  return 0;
}