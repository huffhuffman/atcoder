#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

vector<int> getPrimeFactors(ll n) {
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

  ll n;
  cin >> n;

  vector<int> primes = getPrimeFactors(n);

  vector<int> v;

  ll ans = 1;
  for (int i = 0; i < primes.size(); i++) {
    if (primes[i] > 0 && i != 1) {
      while(primes[i] > 0) {
        v.push_back(i);
        primes[i]--;
      }
    }
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < v.size() - 1; i++) {
    ans *= v[i];
  }

  ans += v.back();

  cout << ans - 2 << endl;

  return 0;
}