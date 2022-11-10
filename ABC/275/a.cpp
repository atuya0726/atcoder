#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector <int> H(n);

  for(int i=0;i<n;i++) cin >> H[i];

  auto max = max_element(H.begin(),H.end());

  int ans = distance(H.begin(), max) + 1;


  cout << ans << endl;
  return 0;
}