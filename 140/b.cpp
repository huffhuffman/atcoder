#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  vector<int> c(n);

  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    a.at(i)--;
  }

  for (int i = 0; i < n; i++) {
    cin >> b.at(i);
  }

  for (int i = 0; i < n - 1; i++) {
    cin >> c.at(i);
  }

  /* main */

  int count = 0;

  for (int i = 0; i < n; i++) {
    count += b.at(i);
  }

  for (int i = 0; i < n - 1; i++) {
    if (a.at(i) + 1 == a.at(i + 1)) {
      count += c.at(a.at(i));
    }
  }

  cout << count << endl;

  return 0;
}