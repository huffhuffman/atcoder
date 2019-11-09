#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> sv(n);
  for (int i = 0; i < n; i++) {
    cin >> sv[i];
  }

  reverse(sv.begin(), sv.end());

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << sv[j][i];
    }

    cout << endl;
  }

  return 0;
}