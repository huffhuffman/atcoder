#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> b(n - 1, 0);

  for (int i = 0; i < n - 1; i++) {
    cin >> b.at(i);
  }

  b.push_back(1000000);

  vector<int> a(n, 0);

  a.at(0) = b.at(0);

  for (int i = 1; i < n; i++) {
    int v = min(b.at(i), b.at(i - 1));

    a.at(i) = v;
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    count += a.at(i);
  }

  cout << count << endl;

  return 0;
}