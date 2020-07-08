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

  ll a, b;
  cin >> a >> b;
  vector<ll> p(a), q(b);
  for (int i = 0; i < a; i++) {
    cin >> p[i];
  }
  for (int i = 0; i < b; i++) {
    cin >> q[i];
  }

  vector<char> v(10, 'x');
  for (int i = 0; i < a; i++) {
    v[p[i]] = '.';
  }
  for (int i = 0; i < b; i++) {
    v[q[i]] = 'o';
  }

  cout << v[7] << ' ' << v[8] << ' ' << v[9] << ' ' << v[0] << ln;
  cout << ' ' << v[4] << ' ' << v[5] << ' ' << v[6] << ln;
  cout << "  " << v[2] << ' ' << v[3] << ln;
  cout << "   " << v[1] << ln;

  return 0;
}