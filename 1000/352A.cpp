#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  int count_5 = 0;
  int count_0 = 0;
  for(int i = 0; i< n; i++){
      int x; cin >> x;
      if( x == 5){
          count_5++;
      }else{
          count_0++;
      }
  }
  int usable5s = (count_5 / 9) * 9;
  if(count_0 ==0){
      cout << -1 << "\n";
  }
  else{
      if (usable5s > 0) {
        for (int i = 0; i < usable5s; i++) {
            cout << 5;
        }
        for (int i = 0; i < count_0; i++) {
             cout << 0;
        }
        cout << "\n";
      } else {
        cout << 0 << "\n";
    }
  }
  return 0;
}
