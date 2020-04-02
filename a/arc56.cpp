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

  ll a, b, k, l;
  cin >> a >> b >> k >> l;

  ll ansa = (k / l) * b + (k % l) * a;
  ll ansb = ((k + l - 1) / l) * b;
  ll ansc = a * k;

  cout << min({ansa, ansb, ansc}) << ln;

  return 0;
}