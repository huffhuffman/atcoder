#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> dailyJobs(m);  // dailyの仕事候補一覧

  for (int i = 0; i < n; i++) {
    int d, r;  // 日数、報酬
    cin >> d >> r;

    if (d > m) continue;
    dailyJobs.at(m - d).push_back(r);  // 日ごとの仕事候補一覧を決定
  }

  ll count = 0;
  priority_queue<int> q;
  // dailyJobsの後ろから貪欲に調べる
  for (int i = m - 1; i >= 0; i--) {
    // 日ごとに一番最高報酬の仕事をみつける
    for (int r : dailyJobs.at(i)) {
      q.push(r);
    }

    if (!q.empty()) {
      count += q.top();
      q.pop();
    }
  }

  cout << count << endl;

  return 0;
}