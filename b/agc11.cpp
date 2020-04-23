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

  ll n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(all(a));

  // 小さいほうから順に足し合わせながら種類カウントを増やす
  // 2倍ではたりなくなったら種類カウントをリセットする

  ll ans = 1;
  ll acc = a[0];
  for (int i = 1; i < n; i++) {
    if(acc * 2 >= a[i]) {
      //2倍以下なら選べる
      ans++;
    } else {
      ans = 1;
    }

    acc += a[i];
  }

  cout << ans << ln;

  return 0;
}