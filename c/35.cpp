#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, q;
  cin >> n >> q;

  vector<int> l(q), r(q);
  for (int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
    l[i]--;
    r[i]--;
  }

  vector<int> sum(n + 1);
  for (int i = 0; i < q; i++) {
    sum[l[i]]++;
    sum[r[i] + 1]--;
  }

  for (int i = 1; i < n; i++) {
    sum[i] += sum[i - 1];
  }

  for (int i = 0; i < n; i++) {
    cout << (sum[i] % 2 == 0 ? 0 : 1);
  }
  cout << endl;

  return 0;
}