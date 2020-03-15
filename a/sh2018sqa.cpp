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

  int a, b;
  cin >> a >> b;

  string ans = "x";
  if (a + b == 15) {
    ans = "+";
  }
  if (a * b == 15) {
    ans = "*";
  }

  cout << ans << endl;

  return 0;
}