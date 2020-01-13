#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

const int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  vector<int> diffsum(n - 1);
  for (int i = 1; i < n; i++) {
    int diff = a[i] - a[i - 1];
  }

  for (int i = 0; i < n - 1; i++)
  {
    /* code */
  }
  

  return 0;
}