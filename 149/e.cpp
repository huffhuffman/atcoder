#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

void sieve(int num) {
  int N = 1000000;    // 最大sqrt(N)まで
  bool arr[1000000];  // arr[i] := 整数 i が素数かどうか

  // 篩を初期化
  for (int i = 0; i < N; i++) {
    arr[i] = 1;
  }

  // 篩落とす
  for (int i = 2; i < sqrt(N); i++) {
    if (arr[i]) {
      for (int j = 0; i * (j + 2) < N; j++) {
        arr[i * (j + 2)] = 0;
      }
    }
  }

  for (int i = num; i < N; i++) {
    if (arr[i]) {
      cout << i << endl;
      return;
    }
  }
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int num;
  cin >> num;

  sieve(num);

  return 0;
}