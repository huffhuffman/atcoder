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

  vector<int> c(n, 0);
  for (int i = 0; i < m; i++) {
    c[a[i]]++;
    c[b[i]]++;
  }

  for (int i = 0; i < n; i++) {
    cout << c[i] << endl;
  }

  return 0;
}