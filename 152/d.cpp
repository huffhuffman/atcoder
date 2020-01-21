#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int fact(int n) {
  int res = 1;

  for (int i = 2; i <= n; i++) {
    res = res * i;
  }

  return res;
}

int nCr(int n, int r) { return fact(n) / (fact(r) * fact(n - r)); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  map<ll, ll> mp;
  map<ll, ll> rv;
  for (int i = 1; i <= n; i++) {
    int head = to_string(i)[0] - '0';
    int tail = i % 10;
    int headTail = head * 10 + tail;

    if (tail == 0) continue;

    mp[headTail] += 1;
  }

  ll ans = 0;

  for (int i = 1; i <= n; i++) {
    int head = to_string(i)[0] - '0';
    int tail = i % 10;
    int tailHead = tail * 10 + head;

    if (tail == 0) continue;

    if (mp[tailHead]) {
      ans += mp[tailHead];
    }
  }

  cout << ans << endl;

  return 0;
}