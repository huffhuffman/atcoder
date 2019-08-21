#include <bits/stdc++.h>
using namespace std;

bool hasDivisor(int n, int i) {
  if (n <= i) {
    return false;
  }

  if (n % i == 0) {
    return true;
  }

  return hasDivisor(n, i + 1);
}

bool isPrime(int n) {
  if(n == 1) {
    return false;
  } else if(n == 2) {
    return true;
  }

  return !hasDivisor(n, 2);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  bool ans = isPrime(120);

  cout << (ans ? "素数" : "素数ではない") << endl;

  return 0;
}