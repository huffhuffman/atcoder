#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
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

  vector<int> ans;
  while (n > 0) {
    int a = n % k;
    ans.push_back(a);
    n /= k;
  }

  cout << ans.size() << ln;

  return 0;
}