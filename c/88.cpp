#include <bits/stdc++.h>
using namespace std;

int main(){
  long long x, y;
  cin >> x >> y;

  long long count = 1;
  long long n = x;

  while(true){
    if(x*2 <= y){
      x *= 2;
      count++;
    } else {
      break;
    }
  }

  cout << count << endl;
  return 0;
}