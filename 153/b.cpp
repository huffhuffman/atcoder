#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, n;
  cin >> h >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);
  reverse(a, a + n);

  for (int i = 0; i < n; i++) {
    h -= a[i];
  }

  string ans = "Yes";
  if (h > 0) {
    ans = "No";
  }

  cout << ans << endl;

  return 0;
}