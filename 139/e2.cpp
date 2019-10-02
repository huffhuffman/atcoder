#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> v(4);
  for (int i = 0; i < 4; i++) {
    cin >> v.at(i);
  }

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  for (int val : v) {
    cout << val << endl;
  }

  return 0;
}