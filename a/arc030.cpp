#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin>> n >> k;

  n--;

  if(n % 2) {
    n++;
  }

  int mx = n / 2;

  string ans = "NO";

  if(mx >= k) {
    ans = "YES";
  }

  cout << ans << endl;

  return 0;
}