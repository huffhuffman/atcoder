#include <bits/stdc++.h>
using namespace std;

long long getCount(long long n, long long a, long long b) {
  long long i = 1;

  long long count = 0;
  while (1) {
    long long num = i * n;

    if (a <= num && num <= b) {
      count++;
    } else if (b < num) {
      return count;
    }

    i++;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  long long a, b, c, d;

  cin >> a >> b >> c >> d;

  long long total = b - a + 1;

  long long cs = getCount(c, a, b);
  long long ds = getCount(d, a, b);
  return 0;
}