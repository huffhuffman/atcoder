#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int rec(int num, int totalCount) {
  int num9 = num;
  int num6 = num;

  int c9 = 0;
  while (num9 / 9 > 0) {
    num9 /= 9;
    c9++;
  }

  int c6 = 0;
  while (num6 / 6 > 0) {
    num6 /= 6;
    c6++;
  }

  int d9 = pow(9, c9);
  int d6 = pow(6, c6);

  if (c9 == 0 && c6 == 0) {
    totalCount += num;
    return totalCount;
  }

  int p1 = rec(num - d9, totalCount + 1);
  int p2 = rec(num - d6, totalCount + 1);

  return min(p1, p2);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = rec(n, 0);

  cout << ans << endl;

  return 0;
}