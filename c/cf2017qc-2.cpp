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

  string s;
  cin >> s;
  int len = s.size();
  deque<char> d(len);
  for (int i = 0; i < len; i++) {
    d[i] = s[i];
  }

  ll ans = 0;
  while (!d.empty()) {
    char f = d.front();
    char b = d.back();

    if (f == b) {
      d.pop_front();
      if (!d.empty()) {
        d.pop_back();
      }
    } else {
      if (f == 'x') {
        d.pop_front();
        ans++;
      } else if (b == 'x') {
        d.pop_back();
        ans++;
      } else {
        ans = -1;
        break;
      }
    }
  }

  cout << ans << ln;

  return 0;
}