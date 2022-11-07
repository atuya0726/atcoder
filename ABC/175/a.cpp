#include <bits/stdc++.h>
using namespace std;


int main() {
  string S;
  cin >> S;

  int ans = 0;
  int cnt = 0;
  for(int i = 0; i < S.size(); i++){
    if(S[i] == 'R'){
      cnt++;
      ans = max(cnt,0);
    }else{
      cnt = 0;
    } 
  }
  cout << ans << endl;
  return 0;
}