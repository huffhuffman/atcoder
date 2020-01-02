#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int N = 1000000;
int arr[1000000];

int p(int num){
	for(int i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for(int i = num; i < N; i++){
		if(arr[i]){
			return i;
		}
	}
}

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int x;
  cin >> x;

  cout << p(x) << endl;

  return 0;
}