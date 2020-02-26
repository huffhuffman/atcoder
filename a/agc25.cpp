#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int digits_sum(int num) {
  string s = to_string(num);
  int keta = s.size();

  int sum = 0;
  for (int i = 0; i < keta; i++) {
    sum += s[i] - '0';
  }

  return sum;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int ans = INF;
  for (int a = 1; a < n; a++) {
    int b = n - a;

    int sum = digits_sum(a) + digits_sum(b);

    ans = min(sum, ans);
  }

  cout << ans << endl;

  return 0;
}