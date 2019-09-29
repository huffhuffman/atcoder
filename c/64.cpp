#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> a(n);

  int gray = 0;
  int brown = 0;
  int green = 0;
  int lblue = 0;
  int blue = 0;
  int yellow = 0;
  int orange = 0;
  int red = 0;
  int free = 0;

  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < n; i++) {
    int ai = a.at(i);

    if (ai <= 399) {
      gray++;
    } else if (ai <= 799) {
      brown++;
    } else if (ai <= 1199) {
      green++;
    } else if (ai <= 1599) {
      lblue++;
    } else if (ai <= 1999) {
      blue++;
    } else if (ai <= 2399) {
      yellow++;
    } else if (ai <= 2799) {
      orange++;
    } else if (ai < 3200) {
      red++;
    } else {
      free++;
    }
  }

  int ans = 0;

  vector<int> cl = {gray, brown, green, lblue, blue, yellow, orange, red};
  for (int i = 0; i < cl.size(); i++) {
    if (cl.at(i) > 0) ans++;
  }

  int ansMin = ans;
  int ansMax = ans;

  if (free > 0) {
    ansMax += free;
  }

  if (ans == 0) {
    ansMin = 1;
  }

  cout << ansMin << " " << ansMax << endl;

  return 0;
}