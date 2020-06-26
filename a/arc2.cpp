#include <bits/stdc++.h>
#define aint(x) (x).begin(), (x).end()
#define raint(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isUruu(int y) { return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0); }

int getDay(int y, int m) {
  int day = days[m - 1];
  if (isUruu(y) && m == 2) {
    day++;
  }
  return day;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int Y, M, D;
  char ch;
  cin >> Y >> ch >> M >> ch >> D;

  for (int d = D; d <= getDay(Y, M); d++) {
    if (Y % (M * d) == 0) {
      printf("%04d/%02d/%02d\n", Y, M, d);
      return 0;
    }
  }

  for (int m = M + 1; m <= 12; m++) {
    for (int d = 1; d <= getDay(Y, m); d++) {
      if (Y % (m * d) == 0) {
        printf("%04d/%02d/%02d\n", Y, m, d);
        return 0;
      }
    }
  }

  for (int y = Y + 1;; y++) {
    for (int m = 1; m <= 12; m++) {
      for (int d = 1; d <= getDay(y, m); d++) {
        if (y % (m * d) == 0) {
          printf("%04d/%02d/%02d\n", y, m, d);
          return 0;
        }
      }
    }
  }

  return 0;
}