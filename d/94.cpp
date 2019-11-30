#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int maxx = a[n - 1];
  int r = a[0];

  double t = maxx / 2.0;
  for (int i = 1; i < n; i++) {
    double dt = abs(t - r);
    double da = abs(t - a[i]);
    if (da < dt) {
      r = a[i];
    }
  }

  cout << maxx << " " << r << endl;

  return 0;
}