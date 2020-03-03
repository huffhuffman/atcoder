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

  int n, a, b;
  cin >> n >> a >> b;

  int d = b - a;

  string ans;
  if (d % 2 == 0) {
    ans = "Alice";
  } else {
    ans = "Borys";
  }

  cout << ans << endl;

  return 0;
}