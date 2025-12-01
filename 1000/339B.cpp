#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m; cin >> n >> m;
  int current_pos = 1;
  ll total_time = 0;
  for(int i =0; i<m; i++){
      int target_pos; cin >> target_pos;
      if(target_pos>=current_pos)
      {
          total_time += target_pos-current_pos;
      }else{
          total_time += (n-current_pos) + target_pos;
      }
      current_pos = target_pos;
  }
  cout << total_time;
  return 0;
}
