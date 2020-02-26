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

  int n;
  cin >> n;
  vector<int> a(n);
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    total += a[i];
  }

  double avg = total / static_cast<double>(n);

  double mind = INF;
  int ans = -1;
  for (int i = 0; i < n; i++) {
    double dist = abs(avg - a[i]);
    if (dist < mind) {
      ans = i;
      mind = dist;
    }
  }

  cout << ans << endl;

  return 0;
}