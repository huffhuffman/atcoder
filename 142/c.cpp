#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool compareVector(pair<int, int> a, pair<int, int> b) {
  return a.second < b.second;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<pair<int, int>> a(n);

  for (int i = 0; i < n; i++) {
    pair<int, int> p;

    int ai;
    cin >> ai;

    p.first = i;
    p.second = ai;
    a.at(i) = p;
  }

  sort(a.begin(), a.end(), compareVector);

  for (int i = 0; i < n - 1; i++) {
    cout << a.at(i).first + 1 << " ";
  }
  cout << a.at(n - 1).first + 1 << endl;

  return 0;
}