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

  ll sum = 0;
  vector<ll> v;
  for (int i = 1; i <= n; i++) {
    sum += i;
    v.push_back(i);
    if (sum >= n) {
      break;
    }
  }

  ll rem = sum - n;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == rem) continue;
    cout << v[i] << ln;
  }

  return 0;
}