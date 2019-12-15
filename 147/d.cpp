#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;

  ll A[301010];

  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  ll ans = 0;
  for (int b = 0; b < 60; b++) {
    ll msk = 1LL << b;

    ll zero = 0, one = 0;
    for (int i = 0; i < N; i++) {
      if (A[i] & msk) {
        one++;
      } else {
        zero++;
      }
    }

    ans += msk % MOD * zero % MOD * one % MOD;
  }
  cout << ans % MOD << endl;

  return 0;
}