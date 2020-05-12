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

  ll n, k;
  cin >> n >> k;
  vector<ll> a(n + 10);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];  // 1 index
  }

  vector<ll> f(300000);  //何回目にどこにいるか
  f[0] = 1;              // 最初は1
  ll key = 0;
  set<ll> st;
  st.insert(1);
  for (int i = 0;; i++) {
    ll cur = f[i];
    ll to = a[cur];
    f[i + 1] = to;

    // はじめて同じ数がでたらbreak
    if (st.find(to) != st.end()) {
      key = to;
      break;
    }

    st.insert(to);
  }

  ll offset = 0;
  for (int i = 0; i < f.size(); i++) {
    if (f[i] == key) {
      break;
    } else {
      offset++;
    }
  }

  vector<ll> freqs;
  freqs.push_back(key);
  for (int i = offset + 1; i < f.size(); i++) {
    if (f[i] == key) {
      break;
    } else {
      freqs.push_back(f[i]);
    }
  }

  ll freq = freqs.size();

  ll ans = 0;

  if (k > offset) {
    k -= offset;
    ans = freqs[k % freq];
  } else {
    ans = f[k];
  }

  cout << ans << ln;

  return 0;
}