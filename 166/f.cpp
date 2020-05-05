#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  string ans = "Yes";
  vector<char> av;
  auto e = [&](ll x, ll y, string q) {
    if (x == 0 && y == 0) {
      ans = "No";
      return false;
    }

    if (x > y) {
      x--;
      y++;
      if (q == "AB") {
        av.push_back('B');
      } else if (q == "BC") {
        av.push_back('C');
      } else {
        av.push_back('C');
      }
    } else {
      y--;
      x++;
      if (q == "AB") {
        av.push_back('A');
      } else if (q == "BC") {
        av.push_back('B');
      } else {
        av.push_back('A');
      }
    }

    return true;
  };

  for (int i = 0; i < n; i++) {
    if (s[i] == "AB") {
      bool ok = e(a, b, "AB");
      if (!ok) {
        break;
      }
    } else if (s[i] == "BC") {
      bool ok = e(b, c, "BC");
      if (!ok) {
        break;
      }
    } else if (s[i] == "AC") {
      bool ok = e(a, c, "AC");
      if (!ok) {
        break;
      }
    }
  }

  cout << ans << ln;
  if (ans == "Yes") {
    for (int i = 0; i < n; i++) {
      cout << av[i] << ln;
    }
  }

  return 0;
}
