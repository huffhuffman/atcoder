#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a;
  vector<int> tmp;

  for (int i = 1; i <= n; i++) {
    int ai;
    cin >> ai;

    a.push_back(ai - i);
  }

  sort(a.begin(), a.end());

  int x = a[ceil(a.size() / 2)];
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += abs(a.at(i) - x);
  }

  cout << sum << endl;

  return 0;
}