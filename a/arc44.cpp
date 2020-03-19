#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

// エラトステネスの篩
bool isActualPrime(ll num) {
  if (num < 2) {
    return false;
  }

  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;

  string ans = "Not Prime";
  if (isActualPrime(n)) {
    ans = "Prime";
  } else if (n != 1) {
    string nstr = to_string(n);

    int lastNum = (nstr.back() - '0');
    bool isE = lastNum % 2 == 0;
    bool isF = lastNum == 5;

    if (!isE && !isF) {
      int sum = 0;
      for (int i = 0; i < nstr.size(); i++) {
        int num = nstr[i] - '0';
        sum += num;
      }

      if (sum % 3) {
        ans = "Prime";
      }
    }
  }

  cout << ans << ln;

  return 0;
}