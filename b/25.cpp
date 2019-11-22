#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, a, b;
  cin >> n >> a >> b;

  vector<string> s(n);
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> d[i];
  }

  int ansd = 0;
  for (int i = 0; i < n; i++) {
    int ds = d[i];
    if (ds > b) {
      ds = b;
    } else if (ds < a) {
      ds = a;
    }

    if (s[i] == "East") {
      ansd += ds;
    } else {
      ansd -= ds;
    }
  }

  string anss = ansd > 0 ? "East " : "West ";

  if (ansd == 0) {
    cout << ansd << endl;
  } else {
    cout << anss << abs(ansd) << endl;
  }

  return 0;
}