#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  double r, d;
  cin >> r >> d;

  double area = r * r * M_PI;

  double circ = 2 * d * M_PI;

  double ans = area * circ;

  cout << setprecision(10) << ans << endl;

  return 0;
}