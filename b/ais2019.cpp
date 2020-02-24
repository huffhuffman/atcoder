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
  int a, b;
  cin >> a >> b;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  int fst = 0;
  int snd = 0;
  int trd = 0;
  for (int i = 0; i < n; i++) {
    if (p[i] <= a) {
      fst++;
    } else if (p[i] <= b) {
      snd++;
    } else {
      trd++;
    }
  }

  int ans = min({fst, snd, trd});

  cout << ans << endl;

  return 0;
}