#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int N = 1000000;    // Nまで調べる
bool arr[1000000];  // arr[i] := 整数 i が素数かどうか

void initSieve() {
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
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int q;
  cin >> q;
  vector<int> l(q), r(q);
  for (int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
  }

  initSieve();

  vector<int> dp(1000000, 0);
  for (int i = 1; i <= 100000; i++) {
    dp[i] = dp[i - 1];

    if (i % 2 == 0) continue;

    if (arr[i] && arr[(i + 1) / 2]) {
      dp[i]++;
    }
  }

  dp[0] = 1;

  for (int i = 0; i < q; i++) {
    int li = l[i];
    int ri = r[i];

    cout << dp[ri] - dp[li - 1] << ln;
  }

  return 0;
}