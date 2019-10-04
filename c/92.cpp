#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }

  int total = 0;

  for (int i = 1; i < n + 2; i++) {
    total += abs(a[i] - a[i - 1]);
  }

  for (int i = 1; i <= n; i++) {
    int curr = abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]);
    int next = abs(a[i + 1] - a[i - 1]);

    int diff = abs(next - curr);

    cout << total - diff << endl;
  }

  return 0;
}