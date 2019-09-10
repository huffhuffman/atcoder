#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<int> c(n - 1), s(n - 1), f(n - 1);

  for (int i = 0; i < n - 1; i++) {
    cin >> c.at(i) >> s.at(i) >> f.at(i);
  }

  for (int i = 0; i < n - 1; i++) {
    int pastTime = s.at(i) + c.at(i);
    for (int j = i + 1; j < n - 1; j++) {
      pastTime = s.at(j) < pastTime ? pastTime : s.at(j);

      int freq = f.at(j);

      int waitTrainTime = pastTime % freq == 0
                              ? 0
                              : (((pastTime + freq) / freq) * freq) - pastTime;
      pastTime += waitTrainTime + c.at(j);
    }

    cout << pastTime << endl;
  }
  cout << 0 << endl;

  return 0;
}