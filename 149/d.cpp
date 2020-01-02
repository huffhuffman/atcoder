#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k, r, s, p;
  string t;
  cin >> n >> k >> r >> s >> p >> t;

  vector<char> pl(n);
  vector<int> score(n);
  for (int i = 0; i < n; i++) {
    switch (t[i]) {
      case 'r':
        pl[i] = 'p';
        score[i] = p;
        break;
      case 's':
        pl[i] = 'r';
        score[i] = r;
        break;
      case 'p':
        pl[i] = 's';
        score[i] = s;
    }
  }

  for (int i = k; i < n; i++) {
    if (pl[i] == pl[i - k]) {
      score[i] = 0;
      pl[i] = 'x';
    }
  }

  int ans = accumulate(score.begin(), score.end(), 0);

  cout << ans << endl;

  return 0;
}