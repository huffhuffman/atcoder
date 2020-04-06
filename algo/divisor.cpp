#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

// 約数列挙 O(√n)
vector<ll> divisor(ll n) {
  vector<ll> ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret));
  return (ret);
}

// set版
auto divisor2(ll n) {
  set<ll> st;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      st.insert(i);
      st.insert(n / i);
    }
  }

  return st;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  auto divs = divisor(n);
  auto divs2 = divisor2(n);  // set版

  cout << ln << "divisor vector版" << ln;
  for (auto d : divs) {
    cout << d << ln;
  }

  cout << ln << "divisor set版" << ln;
  for (auto d : divs2) {
    cout << d << ln;
  }

  return 0;
}