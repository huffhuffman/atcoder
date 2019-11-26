#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  cin >> s;

  vector<string> a = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
  int ans;
  if (s == "SUN") {
    ans = 7;
  }
  if (s == "MON") {
    ans = 6;
  }
  if (s == "TUE") {
    ans = 5;
  }
  if (s == "WED") {
    ans = 4;
  }
  if (s == "THU") {
    ans = 3;
  }
  if (s == "FRI") {
    ans = 2;
  }
  if (s == "SAT") {
    ans = 1;
  }
  cout << ans << endl;

  return 0;
}