#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<string> s(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  int a = 0;
  int b = 0;
  int ab = 0;
  for (auto str : s) {
    int cnt = 0;

    if (str.front() == 'B') {
      b++;
    }
    if (str.back() == 'A') {
      a++;
    }
    if (str.front() == 'B' && str.back() == 'A') {
      a--;
      b--;
      ab++;
    }
    for (int i = 1; i < str.size(); i++) {
      if (str[i - 1] == 'A' && str[i] == 'B') {
        cnt++;
      }
    }
    ans += cnt;
  }

  if(ab == 0) {
    ans += min(a, b);
  } else if(a + b > 0) {
    ans += min(a, b) + ab;
  } else {
    ans += ab - 1;
  }

  cout << ans << endl;

  return 0;
}