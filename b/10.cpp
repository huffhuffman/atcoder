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
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    while(a[i] % 2 == 0 || a[i] % 3 == 2) {
      ans++;
      a[i]--;
    }
  }

  cout << ans << endl;

  return 0;
}