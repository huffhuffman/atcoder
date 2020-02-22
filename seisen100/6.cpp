#include <bits/stdc++.h>
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

  string s;
  cin >> s;

  int ans = 0;
  for (char i = '0'; i <= '9'; i++) {
    for (char j = '0'; j <= '9'; j++) {
      for (char k = '0'; k <= '9'; k++) {
        bool A = false;
        bool B = false;
        bool C = false;
        for (int x = 0; x < n; x++) {
          char c = s[x];
          if (A == false) {
            if (c == i) {
              A = true;
              continue;
            }
          } else if (B == false) {
            if (c == j) {
              B = true;
            }
          } else {
            if (c == k) {
              C = true;
              break;
            }
          }
        }

        if (A && B && C) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}