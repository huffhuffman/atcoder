#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k, s;
  cin >> n >> k >> s;

  vector<int> ans(n);
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    ans[i] = s;
  }

  for (int i = 0; i < (n - k); i++) {
    ans[i] = s - 1;
    if(s == 1 || s == 2) {
      ans[i] = 1000000;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}