#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  priority_queue<int> aq;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    aq.push(a);
  }

  for (int i = 0; i < m; i++) {
    int a = aq.top();
    aq.pop();
    aq.push(a / 2);
  }

  ll total = 0;
  while (!aq.empty()) {
    total += aq.top();
    aq.pop();
  }

  cout << total << endl;

  return 0;
}