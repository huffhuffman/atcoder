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

  vector<int> ans(6);
  for (int i = 0; i < n; i++) {
    double M, m;
    cin >> M >> m;

    if (M >= 35) {
      ans[0]++;
    } else if (M >= 30) {
      ans[1]++;
    } else if (M >= 25) {
      ans[2]++;
    }

    if (m >= 25) {
      ans[3]++;
    }

    if (m < 0 && M >= 0) {
      ans[4]++;
    }

    if (M < 0) {
      ans[5]++;
    }
  }

  for (int i = 0; i < 6; i++) {
    cout << ans[i] << (i < 5 ? " " : ln);
  }

  return 0;
}