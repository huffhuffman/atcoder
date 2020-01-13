#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;
  vector<int> p(m);
  vector<string> s(m);
  for (int i = 0; i < m; i++) {
    cin >> p[i] >> s[i];
  }

  set<int> ac;
  map<int, int> mp;
  for (int i = 0; i < m; i++) {
    string si = s[i];
    if (si == "AC") {
      ac.insert(p[i]);
    } else {
      if (ac.find(p[i]) == ac.end()) {
        mp[p[i]]++;
      }
    }
  }

  // acしなければペナルティにならない
  int penaCnt = 0;
  for (auto num : ac) {
    // num = acした問題の番号
    penaCnt += mp[num];
  }

  int acCnt = ac.size();

  cout << acCnt << " " << penaCnt << endl;

  return 0;
}