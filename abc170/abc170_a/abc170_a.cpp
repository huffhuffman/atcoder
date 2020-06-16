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

  ll x[5] = {};
  for (int i = 0; i < 5; i++) {
    cin >> x[i];
  }

  for (int i = 0; i < 5; i++) {
    if (i + 1 != x[i]) {
      cout << i + 1 << ln;
      break;
    }
  }

  return 0;
}