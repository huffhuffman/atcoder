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

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int inc = -1;
  int ans = 1;
  for (int i = 0; i < n - 1; i++) {
    if (inc == -1) {
      if (a[i] < a[i + 1]) {
        inc = 1;
      }
      if (a[i] > a[i + 1]) {
        inc = 0;
      }
    } else if (inc == 1) {
      if (a[i] > a[i + 1]) { 
        ans++;
        inc = -1;
      }
    } else if (inc == 0) {
      if (a[i] < a[i + 1]) {
        ans++;
        inc = -1;
      }
    }
  }

  cout << ans << ln;

  return 0;
}