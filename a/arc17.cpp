#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

// エラトステネスの篩
bool sieve(int num) {
  int N = 1000000;    // Nまで調べる
  bool arr[1000000];  // arr[i] := 整数 i が素数かどうか

  // 篩を初期化
  for (int i = 0; i < N; i++) {
    arr[i] = 1;
  }

  arr[0] = false;
  arr[1] = false;

  // 篩落とす
  for (int i = 2; i < sqrt(N); i++) {
    if (arr[i]) {
      for (int j = 0; i * (j + 2) < N; j++) {
        arr[i * (j + 2)] = 0;
      }
    }
  }

  return arr[num];
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  string ans = sieve(n) ? "YES" : "NO";

  cout << ans << ln;
  return 0;
}