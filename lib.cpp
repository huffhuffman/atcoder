#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  vector<int> a;
  sort(a.begin(), a.end(), greater<int>());  // greaterの書き方

  cout << lcm(2, 3) << endl;

  return 0;
}