#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int MOD = 10007;

vector<int> dp(2000000, 0);

int tri(int n) {
  if (n < 3) {
    return 0;
  }

  if (n == 3) {
    return 1;
  }

  if(dp[n] != 0) {
    return dp[n] % MOD;
  }

  return dp[n] = tri(n - 1) % MOD + tri(n - 2) % MOD + tri(n - 3) % MOD;
}

int main() {
  int n;
  cin >> n;

  dp[3] = 1;

  cout << tri(n) % MOD << endl;

  return 0;
}