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

  ll k;
  cin >> k;

  // string s = to_string(k);
  // int len = s.size();

  vector<string> dp(200000);
  for (int i = 0; i <= 100001; i++) {
    if (i <= 10) {
      dp[i] = to_string(i);
      continue;
    }

    string prev = dp[i - 1];
    int ps = prev.size();
    for (int j = 0; j < ps; j++) {
      int cur = ps - 1 - j;
      int nxt = cur - 1;
      if (nxt < 0) {
        if (prev[cur] == '9') {
          string ns = string(ps + 1, '0');
          ns[0] = '1';
          dp[i] = ns;
          break;
        } else {
          prev[cur]++;
          for (int z = 1; z < ps; z++) {
            if (prev[z - 1] != '0') {
              prev[z] = prev[z - 1] - 1;
            } else {
              prev[z] = prev[z - 1];
            }
          }
          dp[i] = prev;
          break;
        }
      }

      if (prev[cur] == '9') {
        continue;
      }

      int cc = (prev[cur] - '0');
      int nc = (prev[nxt] - '0');

      if (nc - cc == 0 || nc - cc == 1) {
        prev[cur] = prev[cur] + 1;
        for (int z = cur + 1; z < ps; z++) {
          if (prev[z - 1] != '0') {
            prev[z] = prev[z - 1] - 1;
          } else {
            prev[z] = prev[z - 1];
          }
        }
        dp[i] = prev;
        break;
      }
    }
  }

  cout << dp[k] << ln;

  return 0;
}