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

  int a, b, c;
  cin >> a >> b >> c;

  ll ans = 0;

  if(a + b + 1 >= c) {
    ans = b + c;
  } else {
    ans = b * 2 + a + 1; 
  }

  cout << ans << endl;

  return 0;
}