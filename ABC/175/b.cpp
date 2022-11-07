#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  int ans = 0;
  vector <int> A(n);
  
  for(int i=0;i<n;i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  for(int i=0;i<n;++i){
    for(int j=0;j<i;++j){
      for(int k=0;k<j;++k){
        if (A[k] != A[j] and A[i] != A[j] and A[k] + A[j] > A[i]) {
          ans++;
        }
      }
    }
  }

  

  cout << ans << endl;
  return 0;
}