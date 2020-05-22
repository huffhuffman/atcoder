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

  cout << setprecision(12);

  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double p = asin(1) * 2;

  cout << p << ln;
  cout << M_PI << ln;

  double t1 = (h * 60 + m) / 720 * (2 * p);
  double t2 = m / 60 * (2 * p);

  double x1 = a * cos(t1);
  double y1 = a * sin(t1);
  double x2 = b * cos(t2);
  double y2 = b * sin(t2);

  cout << hypot(x1 - x2, y1 - y2) << ln;

  return 0;
}