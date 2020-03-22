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
  vector<string> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }

  set<string> used;
  string prev = w[0];
  used.insert(w[0]);

  string ans = "DRAW";
  for (int i = 1; i < n; i++) {
    char last = prev.back();

    if (w[i][0] == last && used.find(w[i]) == used.end()) {
      used.insert(w[i]);
    } else {
      if (i % 2 == 0) {
        ans = "LOSE";
      } else {
        ans = "WIN";
      }
      break;
    }

    prev = w[i];
  }

  cout << ans << ln;

  return 0;
}