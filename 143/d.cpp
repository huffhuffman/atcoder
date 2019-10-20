#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int bgr(int idx) {}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> l(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i];
  }

  sort(l.begin(), l.end());
  reverse(l.begin(), l.end());

  int ans = 0;
  for (int t = 0; t < n; t++) {
    for (int i = t + 1; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        int a = l[t];
        int b = l[i];
        int c = l[j];

        if(a < b + c && b < a + c && c < b + a) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}