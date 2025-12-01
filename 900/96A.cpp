#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string s; cin >> s;
  int count = 0;
  int n = s.size();
  char curr = s[0];
  bool counter = false;
  for(int i =0 ; i< n; i++)
  {
      if(curr == s[i]){
          ++count;
      }
      else{
          count = 1;
          curr = s[i];
      }
      if(count >=7){
        counter = true;
        break;
      }
  }
  if(counter) cout << "YES" << "\n";
  else cout << "NO" << "\n";


  return 0;
}
