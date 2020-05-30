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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;

  for (int i = 0; i < s.size(); i++) {
    if (i == a || i == b || i == c || i == d) {
      cout << "\"";
    }
    cout << s[i];
  }

  ll i = s.size();
  if (i == a || i == b || i == c || i == d) {
      cout << "\"";
  }

  cout << ln;

  return 0;
}