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
  vector<vector<int>> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];

    for (int j = 0; j < a[i]; j++) {
      int tx, ty;
      cin >> tx >> ty;
      tx--;
      x[i].push_back(tx);
      y[i].push_back(ty);
    }
  }

  bitset<5> bit(4);

  cout << bit << endl;

  bit[0] = 1;

  cout << bit << endl;

  bit[1] = 1;

  cout << bit << endl;

  cout << bit[20] << endl;

  return 0;
}