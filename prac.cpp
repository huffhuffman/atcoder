#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;
  string s;
  cin >> s;

  double sum = 0;
  for (int i = 0; i < n; i++) {
    sum += s[i] == 'F' ? 0 : 'E' - s[i];
  }

  double ans = sum / n;

  cout << setprecision(10);
  cout << ans << ln;

  return 0;
}