#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int r[n];
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }

  sort(r, r + n);

  double c = 0;
  for (int i = max(n - k, 0); i < n; i++) {
    c = (c + r[i]) / 2.0;
  }

  cout << setprecision(12);
  cout << c << endl;

  return 0;
}