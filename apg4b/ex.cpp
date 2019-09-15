#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k;
vector<int> a;

bool dfs(int idx, int sum) {
  if (idx == n) return sum == k;

  int num = a.at(idx);

  if (dfs(idx + 1, sum)) return true;

  if (dfs(idx + 1, sum + num)) return true;

  return false;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }

  bool ans = dfs(0, 0);

  cout << (ans ? "Yes" : "No") << endl;

  return 0;
}