#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  ll k;
  cin >> s >> k;

  string copy = s;

  ll ans = 0;

  // 繰り返しなしの一文字
  if (s.size() == 1 && k == 1) {
    ans = 0;
    cout << ans << endl;
    return 0;
  }

  // 繰り返しありの一文字
  if (s.size() == 1 && k >= 2) {
    ans = k / 2;
    cout << ans << endl;
    return 0;
  }

  bool same = true;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] != s[i + 1]) {
      same = false;
      break;
    }
  }

  // 全部一緒かつ奇数
  if (same && s.size() % 2 != 0 && k >= 2) {
    ll d2 = 0;
    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == 'A' || s[i + 1] == 'A') continue;
      if (s[i] == s[i + 1]) {
        d2++;
        s[i + 1] = 'A';
      }
    }

    ll ANS = 0;
    ll a1 = d2;
    ll a2 = d2 + 1;

    ANS = (a1 + a2) * (k / 2);
    if (k % 2 != 0) ANS += a1;

    cout << ANS << endl;
    return 0;
  }

  // 最初と最後が同じかつ繰り返しあり
  if (s[0] == s[s.size() - 1] && k >= 2) {
    copy += copy;

    ll d1 = 0;
    for (int i = 0; i < copy.size() - 1; i++) {
      if (copy[i] == 'A' || copy[i + 1] == 'A') continue;
      if (copy[i] == copy[i + 1]) {
        d1++;
        copy[i + 1] = 'A';
      }
    }

    ll d2 = 0;
    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == 'A' || s[i + 1] == 'A') continue;
      if (s[i] == s[i + 1]) {
        d2++;
        s[i + 1] = 'A';
      }
    }

    ll diff = d1 - d2 * 2;

    ll ANS = d2 * k + (diff * (k - 1));

    //　全部同じで奇数のときは

    cout << ANS << endl;
    return 0;
  }

  // 以下最初と最後が異なる　
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == 'A' || s[i + 1] == 'A') continue;
    if (s[i] == s[i + 1]) {
      ans++;
      s[i + 1] = 'A';
    }
  }

  cout << ans * k << endl;

  return 0;
}