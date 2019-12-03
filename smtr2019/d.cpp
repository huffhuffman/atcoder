#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string s;
  cin >> n >> s;

  int ans = 0;

  for (int i = 0; i < 1000; i++) {
    vector<int> lmr = {i / 100, (i / 10) % 10, i % 10};
    int lmrIdx = 0;

    for (int j = 0; j < n; j++) {
      char c = '0' + lmr[lmrIdx]; // lmr を作れるか、左から右に文字列を探索
      if (s[j] == c) lmrIdx++;
      if (lmrIdx == 3) break;
    }

    if(lmrIdx == 3) ans++;
  }

  cout << ans << endl;

  return 0;
}