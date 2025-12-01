#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int row = 0, column = 0;
  for(int i = 1; i<=5; i++)
  {
      for(int j = 1; j<=5; j++)
      {
          int x; cin >>x;
          if(x == 1)
          {
              row = i; column =j;
              break;
          }
      }
  }
  cout << abs(row-3)+abs(column-3) << "\n";
  return 0;
}
