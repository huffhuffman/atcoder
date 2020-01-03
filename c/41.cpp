#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  priority_queue<P> pq;
  for (int i = 0; i < n; i++) {
    pq.emplace(P(a[i], i + 1));
  }

  for (int i = 0; i < n; i++) {
    P p = pq.top();
    pq.pop();

    cout << p.second << endl;
  }

  return 0;
}