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

  int a, b;
  cin >> a >> b;

  string ans = "";
  if (a == 0 || b == 0 || (a < 0 && b > 0)) {
    ans = "Zero";
  } else if (a > 0 && b > 0) {
    ans = "Positive";
  } else {
    int diff = abs(a - b) + 1;

    if (diff % 2 == 0) {
      ans = "Positive";
    } else {
      ans = "Negative";
    }
  }

  cout << ans << endl;

  return 0;
}