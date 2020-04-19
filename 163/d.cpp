#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;

constexpr int mod = 1000000007;
struct mint {
  ll x;
  mint(ll x = 0) : x((x % mod + mod) % mod) {}
  mint operator-() const { return mint(-x); }
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod - a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res *= a;
  }
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod - 2); }
  mint& operator/=(const mint a) { return (*this) *= a.inv(); }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
};

// 高速nCk（n == 10**9まで対応）
mint nCk(int n, int k) {
  mint x = 1, y = 1;
  for (int i = 0; i < k; i++) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, k;
  cin >> n >> k;

  mint maxx = mint(0);
  vector<mint> maxv(n + 10);
  for (int a = 0; a < n + 1; a++) {
    maxx += mint(n - a);
    maxv[a + 1] = maxx;
  }

  mint minn = mint(0);
  vector<mint> minv(n + 10);
  for (int a = 1; a <= n + 1; a++) {
    minn += mint(a);
    minv[a + 1] = minn;
  }

  mint ans = mint(0);
  for (int c = k; c <= n + 1; c++) {
    maxv[c];
    minv[c];

    mint cnt = maxv[c] - minv[c] + mint(1);

    ans += cnt;
  }

  cout << ans.x << ln;

  return 0;
}