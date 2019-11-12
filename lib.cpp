#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 1000000007;
const int INF = 1001001001;

// nCrとセット
// Returns factorial of n
int fact(int n) {
  int res = 1;

  for (int i = 2; i <= n; i++) {
    res = res * i;
  }

  return res;
}

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

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

int shakutori(int n, vector<int> &v) {
  ll sum = 0;
  int ans = 0;

  bool condition;  // rを右に進められる条件を書く

  int r = 0;
  for (int l = 0; l < n; l++) {
    while (r < n && condition) {
      sum += v[r];
      ++r;
    }

    ans += r - l;  // conditionを満たす個数を求める尺取り
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