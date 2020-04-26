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

  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  ll red = 0;
  ll blue = 0;
  for (int i = 0; i < n; i++) {
    string t = s[i];

    red += count(all(t), 'R');
    blue += count(all(t), 'B');
  }

  string ans = "DRAW";
  if (red > blue) {
    ans = "TAKAHASHI";
  } else if (blue > red) {
    ans = "AOKI";
  }

  cout << ans << ln;

  return 0;
}