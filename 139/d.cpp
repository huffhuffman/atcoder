#include <bits/stdc++.h>
using namespace std;

long long sum(long long num) {
  if (num == 0) return 0;

  return sum(num - 1) + num;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long N;

  cin >> N;

  long long ans = sum(N - 1);

  cout << ans << endl;

  return 0;
}