#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> getPrimeFactors(int n) {
  vector<int> p(n + 1, 0);

  if (n == 0) return p;

  p.at(1) = 1;

  int num = n;
  for (int i = 2; i * i <= n; i++) {
    while (num % i == 0) {
      num /= i;
      p.at(i)++;
    }

    if (num == 1) break;
  }

  if (num != 1) p.at(num)++;

  return p;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v = getPrimeFactors(n);

  for (int i = 0; i < v.size(); i++) {
    cout << i << ": " << v.at(i) << endl;
  }

  return 0;
}