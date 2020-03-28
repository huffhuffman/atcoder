#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<int> d(m);
  for (int i = 0; i < m; i++) {
    cin >> d[i];
  }

  vector<int> list(n + 1);
  for (int i = 0; i <= n; i++) {
    list[i] = i;
  }

  int curr = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 1; j <= n; j++) {
      if (list[j] == d[i]) {
        list[j] = curr;
        curr = d[i];
        break;
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << list[i] << ln;
  }

  return 0;
}