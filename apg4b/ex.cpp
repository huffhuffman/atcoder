#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int sum = 0;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    sum += x;
    a.at(i) = x;
  }

  int avg = sum / n;

  for (int i = 0; i < n; i++) {
    cout << abs(avg - a.at(i)) << endl;
  }

  return 0;
}