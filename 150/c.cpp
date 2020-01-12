#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;

  cin >> n;

  vector<int> p(n), q(n), v(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> q[i];
  }

  for (int i = 0; i < n; i++) {
    v[i] = i + 1;
  }

  int idx = 1;
  int pidx;
  int qidx;
  do {
    bool pok = true;
    bool qok = true;
    for (int i = 0; i < n; i++) {
      if (v[i] != p[i]) {
        pok = false;
      }

      if (v[i] != q[i]) {
        qok = false;
      }
    }

    if (pok) {
      pidx = idx;
    }

    if (qok) {
      qidx = idx;
    }

    idx++;
  } while (next_permutation(v.begin(), v.end()));

  cout << abs(pidx - qidx) << endl;

  return 0;
}