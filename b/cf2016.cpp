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

  int n, a, b;
  cin >> n >> a >> b;
  string s;
  cin >> s;
  int bcnt = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (cnt < a + b) {
      if (s[i] == 'a') {
        cout << "Yes" << ln;
        cnt++;
      } else if (s[i] == 'b' && bcnt < b) {
        cout << "Yes" << ln;
        bcnt++;
        cnt++;
      } else {
        cout << "No" << ln;
      }
    } else {
      cout << "No" << ln;
    }
  }

  return 0;
}