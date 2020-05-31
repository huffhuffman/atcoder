#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

string ans = "No";

vector<ll> v(3);
ll a, b, c, s;

void dfs(int i, ll sum) {
  if (i >= 3) {
    if (sum == s) {
      ans = "Yes";
    }
    return;
  }

  ll cp = sum;

  dfs(i + 1, cp + v[i]);
  dfs(i + 1, cp + v[i] + 1);
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  cin >> a >> b >> c >> s;

  v[0] = a;
  v[1] = b;
  v[2] = c;

  dfs(0, 0);

  cout << ans << ln;

  return 0;
}