#include <bits/stdc++.h>
#define prime 998244353
using namespace std;
using ll = long long;


int main() {
  int n = 6;
  ll a,b,c,d,e,f;
  ll x,y,ans;

  cin >> a >> b >> c >> d >> e >> f;

  x = ((a%prime)*(b%prime))%prime;
  x = (x*(c%prime))%prime;
  y=((d%prime)*(e%prime))%prime;
  y=(y*(f%prime))%prime;

  ans=(x+prime - y) %prime;

  cout << ans << endl;
  return 0;
}