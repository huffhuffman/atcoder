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

  ll n, m;
  cin >> n >> m;

  vector<ll> a(m), b(m);
  vector<vector<ll>> adj(n);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;

    adj[a[i]].push_back(b[i]);
    adj[b[i]].push_back(a[i]);
  }

  queue<ll> q;
  q.push(0);

  int d[n];
  for (int i = 0; i < n; i++) {
    d[i] = INF;
  }

  d[0] = 0;

  vector<ll> ansv(n);
  while (!q.empty()) {
    ll v = q.front();
    q.pop();

    for (int i = 0; i < adj[v].size(); i++) {
      if (d[adj[v][i]] > d[v] + 1) {
        d[adj[v][i]] = d[v] + 1;
        ansv[adj[v][i]] = v;
        q.push(adj[v][i]);
      }
    }
  }

  string ans = "Yes";
  for (int i = 0; i < n; i++) {
    if (d[i] == INF) {
      ans = "No";
      break;
    }
  }

  cout << ans << ln;

  if (ans == "Yes") {
    for (int i = 1; i < n; i++) {
      cout << ansv[i] + 1 << ln;
    }
  }

  return 0;
}