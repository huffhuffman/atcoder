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

  vector<bool> table(1000000001, false);

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int num = a[i];

    if (!table[num]) {
      ++ans;
      table[num] = true;
    } else {
      --ans;
      table[num] = false;
    }
  }

  cout << ans << endl;

  return 0;
}