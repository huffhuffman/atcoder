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

  ll s;
  cin >> s;

  constexpr ll h = 1000000000;

  ll y3 = (s + h - 1) / h;
  ll x3 = h * y3 - s;

  cout << "0 0 " << h << " " << 1 << " " << x3 << " " << y3 << ln;

  return 0;
}