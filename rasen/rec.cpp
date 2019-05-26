#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  if (n == 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;

  cin >> n;

  int f = factorial(n);
  cout << f << endl;

  return 0;
}