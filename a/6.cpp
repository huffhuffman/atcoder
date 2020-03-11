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
  string s, t;
  cin >> s >> t;

  int ans = n * 2;
  for (int i = 0; i < n; i++) {
    if(s.substr(i) == t.substr(0,n-i)){
      ans = n + i;
      break;
    }
  }

  cout << ans << ln;

  return 0;
}