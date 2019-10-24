#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;

  vector<string> C(h);
  for (int i = 0; i < h; i++) {
    cin >> C[i];
  }

  for (int i = 0; i < h; i++) {
    cout << C[i] << endl;
    cout << C[i] << endl;
  }

  return 0;
}