#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n - 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      cin >> a.at(i).at(j);
      a.at(i).at(j)--;
    }
    reverse(a.at(i).begin(), a.at(i).end());
  }

  vector<P> q;
  auto check = [&](int i) {
    if (a.at(i).size() == 0) return;

    int j = a.at(i).back();

    if (a.at(j).size() == 0) return;
    if (a.at(j).back() == i) {
      P p(i, j);
      if (p.second < p.first)
        swap(p.first, p.second);  // あとでuniq取れるように揃えてる
      q.push_back(p);
    }
  };

  for (int i = 0; i < n; i++) {
    check(i);
  }

  int day = 0;
  while (q.size() > 0) {
    day++;

    // uniqをとっている
    sort(q.begin(), q.end());
    q.erase(unique(q.begin(), q.end()), q.end());

    vector<P> prevQ;
    swap(prevQ, q);

    for (P p : prevQ) {
      int i = p.first, j = p.second;
      a.at(i).pop_back();
      a.at(j).pop_back();
    }

    for (P p : prevQ) {
      int i = p.first, j = p.second;
      check(i);
      check(j);
    }
  }

  for (int i = 0; i < n; i++) {
    if (a.at(i).size() != 0) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << day << endl;

  return 0;
}