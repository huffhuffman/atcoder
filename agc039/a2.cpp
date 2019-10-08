#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

vector<vector<char>> getRuns(string s) {
  vector<vector<char>> runs;  // aabbcccd -> aa/bb/ccc/d

  vector<char> tmp;
  for (int i = 0; i < s.size(); i++) {
    if (tmp.size() < 1 || tmp.back() == s[i]) {
      tmp.push_back(s[i]);
    } else {
      runs.push_back(tmp);

      tmp.clear();
      tmp.push_back(s[i]);
    }

    if (i == s.size() - 1) {
      runs.push_back(tmp);
    }
  }

  return runs;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string s;
  ll k;
  cin >> s >> k;

  auto runs1 = getRuns(s);
  auto runs2 = getRuns(s + s);

  ll ans1 = 0;
  for (auto run : runs1) {
    ans1 += run.size() / 2;
  }

  ll ans2 = 0;  // 二倍にしたやつ
  for (auto run : runs2) {
    ans2 += run.size() / 2;
  }

  int n = (int)s.size();
  if (s == string(n, s[0])) {
    cout << n * k / 2 << endl;
  } else {
    ll ans = ans1 + (ans2 - ans1) * (k - 1);

    cout << ans << endl;
  }
  return 0;
}

/*
s + (ss - s) * (k - 1)

aaba 1
aabaaaba 2
aabaaabaaaba 3

aba 0
abaaba 1
abaabaaba 2

abaa 1
abaaabaa 2
abaaabaaabaa 3

abb 1
abbabb 2
abbabbabb 3

*/