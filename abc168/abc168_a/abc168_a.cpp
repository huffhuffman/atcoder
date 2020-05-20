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

  ll n;
  cin >> n;

  string s = to_string(n);

  ll d = s.back() - '0';

  set<ll> hon = {2, 4, 5, 7, 9};
  set<ll> pon = {0, 1, 6, 8};

  string ans = "hon";
  if (d == 3) {
    ans = "bon";
  } else if (pon.find(d) != pon.end()) {
    ans = "pon";
  }

  cout << ans << ln;

  return 0;
}