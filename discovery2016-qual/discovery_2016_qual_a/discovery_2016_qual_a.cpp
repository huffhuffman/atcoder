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

  ll w;
  cin >> w;

  string s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";

  ll n = s.size();

  ll cnt = 1;

  string ans = "";

  for (int i = 0; i < n; i++) {
    if (cnt <= w) {
      ans += s[i];
    } else {
      cnt = 1;
      ans += "\n";
      ans += s[i];
    }

    cnt++;
  }

  cout << ans << ln;

  return 0;
}