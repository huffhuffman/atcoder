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

  ll n;
  cin >> n;

  string s = to_string(n);

  string ans = "No";
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '7') {
      ans = "Yes";
      break;
    }
  }

  cout << ans << ln;

  return 0;
}