#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  map<char, int> m;
  for (int i = 0; i < n; i++) {
    m[s[i]]++;
  }

  string t;
  for (int i = 0; i < n; i++) {
    for (char j = 'a'; j <= 'z'; j++) {
      if (m[j] == 0) continue;

      if (s[i] == j) {
        m[j]--;
        t += j;
        break;
      }

      m[j]--;
      k--;
      int cnt = 0;
      int d[26] = {};

      for (int l = i + 1; l < n; l++) {
        d[s[l] - 'a']++;
      }
      for (int l = 0; l < 26; l++) {
        cnt += min(d[l], m['a' + l]);
      }

      if(n - 1 - i - cnt <= k) {
        t += j;
        break;
      }

      m[j]++;
      k++;
    }
  }

  cout << t << endl;

  return 0;
}