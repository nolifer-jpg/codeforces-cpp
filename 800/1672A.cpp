#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--)
  {
      int n; cin >> n;
      int total_moves = 0;
      for(int i = 0; i<n; i++)
      {
          int x; cin >> x;
          total_moves +=x-1;
      }
      if(total_moves%2==1)
      {
          cout <<  "errorgorn" << endl;
      }
      else
      {
          cout << "maomao90" << endl;
      }
  }
  return 0;
}
