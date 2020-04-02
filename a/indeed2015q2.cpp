#include <iostream>
#include <string>
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

  string s, t;
  cin >> s >> t;
  int size = s.size();

  if (s == t) {
    cout << 0 << ln;
    return 0;
  }

  string ans = "-1";
  for (int i = 1; i <= size; i++) {
    s = s[size - 1] + s.substr(0, size - 1);

    if (s == t) {
      ans = to_string(i);
      break;
    }
  }

  cout << ans << ln;

  return 0;
}