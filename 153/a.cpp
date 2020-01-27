#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, a;
  cin >> h >> a;

  int cnt = 0;
  while (h > 0) {
    h -= a;
    cnt++;
  }

  cout << cnt << endl;

  return 0;
}