#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int h, w, k;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> h >> w >> k;

  vector<string> a(h), b(h);
  for (int i = 0; i < h; i++) {
    string tmp;
    cin >> tmp;
    a[i] = tmp;
    b[i] = tmp;
  }

  int yokoc = 0;
  deque<int> yq, tq;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c = b[i][j];

      if (c == '#') {
        yokoc++;
        yq.push_back(i);
        break;
      }
    }
  }


  return 0;
}