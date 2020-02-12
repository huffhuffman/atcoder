#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  string ans = "";

  ans += s.substr(0, 4);
  ans += " ";
  ans += s.substr(4);

  cout << ans << endl;

  return 0;
}