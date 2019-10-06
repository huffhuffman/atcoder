#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int h, w;
  cin >> h >> w;

  vector<string> a(h);
  for (int i = 0; i < h; i++) {
    cin >> a[i];
  }

  string row = "";
  for (int i = 0; i < w + 2; i++) {
    row += "#";
  }

  cout << row << endl;
  for (int i = 0; i < h; i++) {
    cout << "#" << a[i] << "#" << endl;
  }
  cout << row << endl;

  return 0;
}