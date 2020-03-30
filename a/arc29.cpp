#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  int ans = INF;
  for (int i = 0; i < (1 << n); i++) {
    bitset<4> bits(i);

    int s0 = 0;
    int s1 = 0;
    for (int j = 0; j < n; j++) {
      if (bits[j]) {
        s1 += t[j];
      } else {
        s0 += t[j];
      }
    }
    int t = max(s0, s1);
    if (ans > t) {
      ans = t;
    }
  }

  cout << ans << ln;

  return 0;
}