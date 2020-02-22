#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  ll num = k;
  int keta = 1;
  while (num <= n) {
    num *= k;
    keta++;
  }

  cout << keta << endl;

  return 0;
}