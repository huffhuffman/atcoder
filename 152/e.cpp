#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

const int MOD = 1000000007;

cpp_int gcd(cpp_int a, cpp_int b) {
  if (b == 0) return a;

  if (a < b) return gcd(b, a);

  return gcd(b, a % b);
}

// lcm
cpp_int lcm(cpp_int x, cpp_int y) { return (x * y) / gcd(x, y); }

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool all = true;
  cpp_int lcms = a[0];
  for (int i = 1; i < n; i++) {
    lcms = lcm(lcms, a[i]) % MOD;

    if (a[i] != a[i - 1]) {
      all = false;
    }
  }

  cpp_int ans = 0;
  for (int i = 0; i < n; i++) {
    cpp_int num = lcms / a[i];

    if (all) {
      num = 1;
    }

    ans += num;
  }

  cout << ans % MOD << endl;

  return 0;
}