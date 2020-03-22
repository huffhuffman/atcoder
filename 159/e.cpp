#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, w, k;
  cin >> h >> w >> k;

  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }

  vector<int> r(h), c(w);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      r[i] += s[i][j] - '0';
      c[j] += s[i][j] - '0';
    }
  }

  for (int i = 0; i < h; i++) {
    for (int i = 0; i < w; i++) {
      
    }
  }

  return 0;
}