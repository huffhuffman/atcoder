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

  int x, y, z;
  cin >> x >> y >> z;
  int a = x;
  int b = y;
  int c = z;
  swap(a, b);
  swap(a, c);

  cout << a << " " << b << " " << c << ln;

  return 0;
}