#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, h, w;
  cin >> n >> h >> w;

  int vr = n - h + 1;
  int hr = n - w + 1;

  int ans = vr * hr;

  cout << ans << endl;

  return 0;
}