#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  map<string, int> m;
  for (int i = 0; i < n; i++) {
    m[s[i]]++;
  }

  int maxx = 0;
  for (auto ms : m) {
    maxx = max(maxx, ms.second);
  }

  for (auto ms : m) {
    if (ms.second == maxx) {
      cout << ms.first << endl;
    }
  }

  return 0;
}