#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

bool bs(vector<int>& v, int key) {
  int l = -1;
  int r = v.size();

  while (r - l > 1) {
    int mid = l + (r - l) / 2;

    if (v[mid] >= key) {
      r = mid;
    } else {
      l = mid;
    }
  }

  return v[r] == key;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  int q;
  cin >> q;
  vector<int> t(n);
  for (int i = 0; i < q; i++) {
    cin >> t[i];
  }

  sort(s.begin(), s.end());

  int ans = 0;
  for (int i = 0; i < q; i++) {
    int key = t[i];

    bool ok = bs(s, key);

    if (ok) {
      ans++;
    }
  }

  cout << ans << ln;

  return 0;
}