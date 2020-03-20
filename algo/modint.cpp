#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
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

  // abc156-dのサンプル
  int n, a, b;
  cin >> n >> a >> b;

  mint total = mint(2).pow(n);
  total -= 1;
  total -= nCk(n, a);
  total -= nCk(n, b);

  cout << total.x << ln;

  return 0;
}