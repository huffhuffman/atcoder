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

  ll n, m;
  cin >> n >> m;
  --m;
  vector<ll> v;
  for (int i = 0; i < n; i++) {
    if (m != i) {
      v.push_back(i + 1);
    }
  }

  cout << v[0] << ln;

  return 0;
}