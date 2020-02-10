#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

vector<string> dirs = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE",
                       "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};

string calc_dir(int deg) {
  string dir = "N";
  int curr = 1125;
  for (int i = 1; i <= 15; i++) {
    if (curr <= deg && deg < curr + 2250) {
      dir = dirs[i];
      break;
    }

    curr += 2250;
  }

  return dir;
}

double diss[] = {0, 3, 16, 34, 55, 80, 108, 139, 172, 208, 245, 285, 327, 20000};

int calc_w(int dis) {
  for (int i = 0; i < 13; i++) {
    diss[i] /= 10;
  }

  double d = dis / 60.0;

  d = round(d * 10) / 10;

  int w = 12;
  for (int i = 0; i < 13; i++) {
    if (diss[i] <= d && d < diss[i + 1]) {
      w = i;
      break;
    }
  }

  return w;
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int deg, dis;
  cin >> deg >> dis;

  deg *= 10;

  int w = calc_w(dis);
  string dir = w > 0 ? calc_dir(deg) : "C";


  cout << dir << " " << w << endl;

  return 0;
}