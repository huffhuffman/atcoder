#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  ll keta = s.size();

  reverse(s.begin(), s.end());

  ll sum = 0;
  bool age = false;
  for (int i = 0; i < keta; i++) {
    int num = s[i] - '0';

    if (num == 0) continue;

    if(age) {
      num++;
    }

    if (num < 5) {
      sum += num;
      age = false;
    } else if(num == 5) {
      
    } else {
      if (i < keta - 1) {
        sum += (10 - num);
        age = true;
      } else {
        sum += (10 - num);
      }
    }
  }

  cout << sum << endl;

  return 0;
}