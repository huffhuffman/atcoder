#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

constexpr int MOD = 1000000007;
constexpr int INF = 1001001001;

constexpr int INF2 = numeric_limits<int>::max() / 2;  // INT_MAX / 2
constexpr int INFLL = numeric_limits<ll>::max() / 2;  // LLONG_MAX / 2

// エラトステネスの篩
void sieve(int num) {
  int N = 1000000;    // Nまで調べる
  bool arr[1000000];  // arr[i] := 整数 i が素数かどうか

  // 篩を初期化
  for (int i = 0; i < N; i++) {
    arr[i] = 1;
  }

  // 篩落とす
  for (int i = 2; i < sqrt(N); i++) {
    if (arr[i]) {
      for (int j = 0; i * (j + 2) < N; j++) {
        arr[i * (j + 2)] = 0;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    if (arr[i]) {
      // i == 素数
      cout << i << endl;
    }
  }
}

// 繰り返し自乗法
ll modpow(ll num, ll pow, ll mod) {
  if (pow == 0) {
    return 1;
  }

  if (pow % 2 == 0) {
    ll res = modpow(num, pow / 2, mod);

    return res * res % mod;
  }

  return num * modpow(num, pow - 1, mod);
}

/* mod 逆元 */
/* ここから */
ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

// 上とセット
ll modinv2(ll a, ll mod) { return modpow(a, mod - 2, mod); }
/* ここまで*/

// 単体逆元
ll modinv(ll a, ll m) {
  ll b = m, u = 1, v = 0;
  while (b) {
    ll t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= m;
  if (u < 0) u += m;
  return u;
}

// nCk mod p (mod対応版nCk)
/* ここから */
const int MAX =
    2000000;  // 問題によって変更する(パスカルの三角形の段数、nCkのnの最大)
ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

// 二項係数計算
ll COM(int n, int k) {
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
/* ここまで */

// nCrとセット（modには対応してない版）
// Returns factorial of n
int fact(int n) {
  int res = 1;

  for (int i = 2; i <= n; i++) {
    res = res * i;
  }

  return res;
}

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

// ncr の ll 単体版
ll choose(int n, int r) {\
  ll acc = 1;
  for (int i = 0; i < r; i++) {
    acc = acc * (n - i) / (i + 1);
  }

  return acc;
}

// run length分割した配列を返す
// 例: "aabbcccd" -> return [['a', 'a'], ['b', 'b'], ['c', 'c', 'c'], ['d']]
vector<vector<char>> getRuns(string s) {
  vector<vector<char>> runs;

  vector<char> tmp;
  for (int i = 0; i < s.size(); i++) {
    if (tmp.size() < 1 || tmp.back() == s[i]) {
      tmp.push_back(s[i]);
    } else {
      runs.push_back(tmp);

      tmp.clear();
      tmp.push_back(s[i]);
    }

    if (i == s.size() - 1) {
      runs.push_back(tmp);
    }
  }

  return runs;
}

// 尺取り
int shakutori(int n, vector<int> &v) {
  ll sum = 0;
  int ans = 0;

  int r = 0;
  for (int l = 0; l < n; l++) {
    while (r < n /* && r を右に進められる条件を書く*/) {
      sum += v[r];
      ++r;
    }

    ans += r - l;  // 条件を満たす個数を求める尺取り
    sum -= v[l];
  }

  return ans;
}

// vectorの i=0 の要素でソート: 昇順の例 / 小 -> 大 / asc
bool compareVector(vector<int> prev, vector<int> curr) {
  return prev.at(0) < curr.at(0);
}

// vectorの i=1 の要素でソート: 降順の例 / 大 -> 小 / dsc
bool compareGreater(vector<int> prev, vector<int> curr) {
  return prev.at(1) > curr.at(1);
}

// 桁数取得
int getDigits(int num) { return to_string(num).length(); }

// lcm
int lcm(int x, int y) { return (x * y) / __gcd(x, y); }

// gcd ビルトインで__gcdがあるけど、それが使えないとき用
int gcd(int a, int b) {
  if (b == 0) return a;

  if (a < b) return gcd(b, a);

  return gcd(b, a % b);
}

// 素因数分解 各素因数の個数の配列を返す O(√n)
vector<int> getPrimeFactors(int n) {
  vector<int> p(n + 1, 0);

  if (n == 0) return p;

  p.at(1) = 1;

  int num = n;
  for (int i = 2; i * i <= n; i++) {
    while (num % i == 0) {
      num /= i;
      p.at(i)++;
    }

    if (num == 1) break;
  }

  if (num != 1) p.at(num)++;

  return p;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> a;
  sort(a.begin(), a.end(), greater<int>());  // greaterの書き方
  // sort(a.rbegin(), a.rend()); でも降順ソートになる

  cout << lcm(2, 3) << endl;

  return 0;
}