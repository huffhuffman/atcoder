#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> v = {1, 1, 2, 2, 2, 4, 5, 5, 5, 6, 8, 8, 10, 15};

  auto hoge = lower_bound(v.begin(), v.end(), 3);

  int idx = distance(v.begin(), hoge);

  cout << v[idx] << endl;

  return 0;
}