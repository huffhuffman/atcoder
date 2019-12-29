#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int curr = 1;
  int ans = 0;
  vector<int> snk;
  for (int i = 0; i < n; i++) {
    if (curr == a[i]) {
      curr++;
      snk.emplace_back(a[i] - 1);
    } else {
      ans++;
    }
  }

  for (int i = 0; i < snk.size(); i++) {
    if (snk[i] != i) {
      ans = -1;
      break;
    }
  }

  if(snk.size() == 0) {
    ans = -1;
  }

  cout << ans << endl;

  return 0;
}