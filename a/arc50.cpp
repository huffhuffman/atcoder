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

  char C, c;
  cin >> C >> c;

  string ans = "No";
  if (tolower(C) == c) {
    ans = "Yes";
  }

  cout << ans << ln;

  return 0;
}