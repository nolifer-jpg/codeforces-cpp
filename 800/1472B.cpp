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
      int cnt_1 = 0;
      int cnt_2 = 0;
      for(int i = 0; i<n; i++)
      {
          int x; cin >> x;
          if(x == 1) cnt_1++;
          else cnt_2++;
      }
      int su = cnt_1+cnt_2*2;
      if(su%2!=0)
      {
          cout << "NO" << "\n";
      }
      else
      {
          if((su/2)%2!=0)
          {
              if(cnt_1 >=1)
              {
                  cout << "YES" << "\n";
              }
              else
              {
                  cout << "NO" << "\n";
              }
          }
          else
          {
              cout << "YES" << "\n";
          }
      }
  }
  return 0;
}
