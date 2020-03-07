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

  ll n;
  cin >> n;

  string s = to_string(n);

  int keta = s.size();

  ll ans = s[0] - '0';
  bool ok = true;
  for (int i = 1; i < keta; i++) {
    ans += 9;
    if (s[i] != '9') {
      ok = false;
    }
  }

  if (!ok) {
    ans--;
  }

  cout << ans << endl;

  return 0;
}