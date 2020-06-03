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

  ll a;
  cin >> a;

  string bs;
  cin >> bs;

  string bt = "";
  for (int i = 0; i < bs.size(); i++) {
    if (bs[i] != '.') {
      bt += bs[i];
    }
  }

  ll b = stoll(bt);

  cout << a * b / 100 << ln;

  return 0;
}