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

  int a, b;
  cin >> a >> b;

  int ans = -100000;
  for (int bit = 0; bit < 2; bit++) {
    for (int i = 0; i < 3; i++) {
      for (int num = 0; num <= 9; num++) {
        if (i == 0 && num == 0) continue;

        if (bit == 0) {
          string stra = to_string(a);
          stra[i] = num + '0';
          int ta = stoi(stra);
          ans = max(ans, ta - b);
        } else {
          string strb = to_string(b);
          strb[i] = num + '0';
          int tb = stoi(strb);
          ans = max(ans, a - tb);
        }
      }
    }
  }

  cout << ans << ln;

  return 0;
}