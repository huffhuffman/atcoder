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

  if (n % 2 != 0) {
    cout << "No" << endl;
  } else {
    int half = n / 2;
    for (int i = 0; i < n / 2; i++) {
      if (s[i] != s[half + i]) {
        cout << "No" << endl;
        return 0;
      }
    }

    cout << "Yes" << endl;
  }

  return 0;
}