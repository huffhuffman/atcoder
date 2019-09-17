#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, k, q;
  cin >> n >> k >> q;

  vector<int> a(q);
  for (int i = 0; i < q; i++) {
    cin >> a.at(i);
  }

  vector<int> p(n, 0);

  for (size_t i = 0; i < q; i++) {
    int who = a.at(i) - 1;
    p.at(who) += 1;
  }

  for (int i = 0; i < n; i++) {
    p.at(i) = k - (q - p.at(i));
  }

  for (int i = 0; i < n; i++) {
    if (p.at(i) <= 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }

  return 0;
}