#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int h, w, n;
  cin >> h >> w >> n;

  int ans = 0;
  int b = 0;
  int i = 0;
  while (1) {
    if (h < w) {
      if (i < w) {
        b += w;
      }
    } else {
      if (i < h) {
        b += h;
      }
    }

    i++;

    if (b >= n) {
      break;
    }
  }

  cout << i << endl;

  return 0;
}