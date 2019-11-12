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

  vector<ll> march(5, 0);
  for (int i = 0; i < n; i++) {
    switch (sv[i][0]) {
      case 'M':
        march[0]++;
        break;
      case 'A':
        march[1]++;
        break;
      case 'R':
        march[2]++;
        break;
      case 'C':
        march[3]++;
        break;
      case 'H':
        march[4]++;
        break;
    }
  }

  ll ans = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        ans += march[i] * march[j] * march[k];
      }
    }
  }

  cout << ans << endl;

  return 0;
}