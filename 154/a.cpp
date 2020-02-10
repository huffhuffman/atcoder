#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s, t, u;
  cin >> s >> t;
  int a, b;
  cin >> a >> b >> u;

  int ans = a + b;
  if (u == s) {
    a--;
  } else {
    b--;
  }

  cout << a << " " << b << endl;

  return 0;
}