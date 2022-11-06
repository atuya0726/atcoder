#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
  ll X,K,D;
  cin >> X >> K >> D;

  ll ans;


  // if(X >= K * D){
  //   ans = X - K * D;
  // }else{
  //   //残り回数を偶数にして、絶対地が最小になるようにする。
  //   ll plus_num = X / D;
    
  //   // cout << plus_num << endl;
  //   // cout << minus_num << endl;
  //   // cout << (K - plus_num % 2 == 0) << endl;

  //   if((K - plus_num) % 2 == 0) ans = X - plus_num * D;
  //   else                      ans = abs(X - minus_num * D);
  // }

  X = abs(X);

  ll straight = min(K, X / D);
  K -= straight;
  X -= straight * D;

  if(K % 2 == 0) cout << X << endl;
  else cout << D - X << endl;

  return 0;
}



