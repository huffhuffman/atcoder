#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int INF = 1001001001;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  int currMin = INF;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (currMin > p[i]) {
      ans++;
      currMin = p[i];
    }
  }

  cout << ans << endl;

  return 0;
}