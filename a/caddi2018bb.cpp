#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, h, w;
  cin >> n >> h >> w;

  vector<int> hv(n), wv(n);
  for (int i = 0; i < n; i++) {
    cin >> hv[i] >> wv[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (hv[i] >= h && wv[i] >= w) {
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}