#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> x;
  vector<int> xv;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;

    x.push_back(v);

    xv.push_back(v);
  }

  sort(x.begin(), x.end());

  int l = x[n / 2 - 1];
  int r = x[n / 2];

  for (int i = 0; i < n; i++) {
    if (xv[i] < r) {
      cout << r;
    } else {
      cout << l;
    }

    cout << endl;
  }

  return 0;
}