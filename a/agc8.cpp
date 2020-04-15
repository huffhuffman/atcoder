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

  ll x, y;
  cin >> x >> y;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      ll nx = i ? -x : x;
      ll ny = j ? -y : y;
      if (nx <= ny) {
        pq.push(i + j + (ny - nx));
      }
    }
  }

  cout << pq.top() << ln;

  return 0;
}