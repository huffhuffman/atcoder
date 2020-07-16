#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
const string ln = "\n";
constexpr int INF = 1001001001;
constexpr int MOD = 1000000007;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  ll n;
  cin >> n;
  map<string, ll> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    m[s]++;
  }

  cout << "AC x " << m["AC"] << ln; 
  cout << "WA x " << m["WA"] << ln; 
  cout << "TLE x " << m["TLE"] << ln; 
  cout << "RE x " << m["RE"] << ln; 

  return 0;
}