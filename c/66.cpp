#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  deque<int> b;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      b.emplace_back(a[i]);
    } else {
      b.emplace_front(a[i]);
    }
  }

  if(n % 2 != 0) {
    reverse(b.begin(), b.end());
  }

  for (int i = 0; i < b.size(); i++) {
    cout << (i ? " " : "") << b[i];
  }
  cout << endl;

  return 0;
}