#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;
  int total = 0;
  int count = 0;
  for(int i = 0; i<n; i++)
  {
      int x; cin >> x;
      total+=x;
      if(total<0){
          count ++;
          total = 0;
      }
  }
  cout << count << "\n";
  return 0;
}
