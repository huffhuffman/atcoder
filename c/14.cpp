#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }

  int max_size = 1000001;

  vector<int> table(max_size, 0);
  for (int i = 0; i < n; i++) {
    table[a[i]]++;
    table[b[i] + 1]--;
  }

  int ans = table[0];
  for (int i = 1; i < max_size; i++) {
    table[i] += table[i - 1];
    ans = max(ans, table[i]);
  }

  cout << ans << endl;

  return 0;
}