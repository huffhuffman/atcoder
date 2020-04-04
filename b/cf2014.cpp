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

  int n;
  cin >> n;

  bool reg = ((n - 1) / 20) % 2 == 0;

  int ans = reg ? 1 : 20;
  for (int i = 0; i < ((n - 1) % 20); i++) {
    if (reg) {
      ans++;
    } else {
      ans--;
    }
  }

  cout << ans << ln;

  return 0;
}