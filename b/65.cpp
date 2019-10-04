#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }

  int ans = 0;
  int next = 0;
  while (1) {
    if (a[next] == 1) {
      ans++;
      break;
    }

    next = a[next];
    ans++;

    if (ans > n) {
      ans = -1;
      break;
    }
  }

  cout << ans << endl;

  return 0;
}