#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  int cnt = count(s.begin(), s.end(), 'o');

  string ans = 15 - s.size() + cnt >= 8 ? "YES" : "NO";

  cout << ans << endl;

  return 0;
}