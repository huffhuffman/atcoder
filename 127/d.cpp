#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  deque<int> a;
  deque<int> b;
  deque<int> c;

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    int anum;
    cin >> anum;
    a.push_back(anum);
  }

  for (int i = 0; i < m; i++) {
    int bnum, cnum;
    cin >> bnum >> cnum;
    b.push_back(bnum);
    c.push_back(cnum);
  }

  priority_queue<pair<int, int>> PQ;

  deque<int>::iterator it;

  for (it = a.begin(); it != a.end(); it++) {
    auto p = make_pair(*it, 1);
    PQ.push(p);
  }

  for (int i = 0; i < m; i++) {
    auto p = make_pair(c[i], b[i]);
    PQ.push(p);
  }

  long long sum = 0;

  for (int count = 0; count < n; count++) {
    auto p = PQ.top();
    PQ.pop();
    sum += p.first;

    auto tmpP = make_pair(p.first, p.second - 1);
    if (tmpP.second > 0) {
      PQ.push(tmpP);
    }
  }

  cout << sum << endl;

  return 0;
}
