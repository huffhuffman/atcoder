#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  set<int> s;
  for (int i = 0; i < n; i++) {
    while (a[i] % 2 == 0) {
      a[i] /= 2;
    }
    s.insert(a[i]);
  }

  cout << s.size() << endl;

  return 0;
}