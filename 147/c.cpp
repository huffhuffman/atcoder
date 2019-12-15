#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<vector<P>> ixy(n);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    ixy[i].resize(a);

    for (int j = 0; j < a; j++) {
      cin >> ixy[i][j].first >> ixy[i][j].second;

      ixy[i][j].first--;
    }
  }

  int ans = 0;
  for (int i = 0; i < (1 << n); i++) {
    // bit全探索
    bitset<20> bit(i);

    bool ok = true;

    set<int> kinds;

    for (int j = 0; j < n; j++) {
      if (bit[j]) {  // ビットが立っている = 正直物としてkindsに何人目かをset
        kinds.emplace(j);
      }
    }

    // 証言と矛盾しないかをチェック
    for (auto witness : kinds) {
      for (auto p : ixy[witness]) {
        int who = p.first;
        int f = p.second;

        if (!f && kinds.find(who) != kinds.end()) {
          ok = false;  // 証言でunkindな人がkind setにいたら矛盾
        }

        if (f && kinds.find(who) == kinds.end()) {
          ok = false;  // 証言でkindな人がkind setにいなかったら無常}
        }
      }

      if (ok) {
        // 矛盾がなければあり得る
        // あり得る場合は正直物の数を数えてchmax
        ans = max(ans, (int)kinds.size());
      }
    }

    cout << ans << endl;

    return 0;
  }