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

  string day;
  cin >> day;

  vector<string> v = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

  reverse(all(v));

  ll ans = 0;
  for (int i = 0; i < 5; i++) {
    if (v[i] == day) {
      ans = i + 1;
    }
  }

  cout << ans << ln;

  return 0;
}