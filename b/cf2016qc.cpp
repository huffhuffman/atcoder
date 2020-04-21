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

  ll k, t;
  cin >> k >> t;
  vector<ll> a(t);
  for (int i = 0; i < t; i++) {
    cin >> a[i];
  }

  priority_queue<P> pq;
  for (int i = 0; i < t; i++) {
    pq.push(P(a[i], i));
  }

  ll ans = 0;

  ll prev = -1;
  while (!pq.empty()) {
    P curr = pq.top();
    pq.pop();

    ll ccnt = curr.first;
    ll ci = curr.second;

    if (prev != ci) {
      // 一個とって、前のやつと違う数ならそのまま使う
      prev = ci;

      --ccnt;

      if (ccnt > 0) {
        pq.push(P(ccnt, ci));
      }
    } else if (!pq.empty()) {
      // 前の数と同じのがでてきたら、その次にでかいの数を使う
      P nex = pq.top();
      pq.pop();

      ll ncnt = nex.first;
      ll ni = nex.second;

      prev = ni;

      --ncnt;
      if (ncnt > 0) {
        pq.push(P(ncnt, ni));
      }
      pq.push(P(ccnt, ci));
    } else {
      // 前の数と同じのしかないorその次の数がないなら同じ種類のを食べるしかないので+
      ans++;

      ccnt--;

      if (ccnt > 0) {
        pq.push(P(ccnt, ci));
      }
    }
  }

  cout << ans << ln;

  return 0;
}