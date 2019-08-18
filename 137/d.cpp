#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<map<int, int>> works;

  for (int i = 0; i < n; i++) {
    int a, b;
    map<int, int> work;

    cin >> a >> b;
    work.insert(make_pair(a, b));
    works.push_back(work);
  }

  return 0;
}