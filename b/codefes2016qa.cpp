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

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }

  set<P> s;
  for (int i = 0; i < n; i++) {
    if (i == a[a[i]]) {
      int ii = i;
      int jj = a[i];
      if(ii > jj) swap(ii, jj);
      s.insert(P(ii, jj));
    }
  }

  int ans = s.size();

  cout << ans << ln;

  return 0;
}