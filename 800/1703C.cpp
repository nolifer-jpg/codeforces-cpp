#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--)
  {
      int n; cin >>n;
      vector<int> a(n);
      for(int i =0; i<n; i++)
      {
          cin >> a[i];
      }
      for(int i = 0; i<n; i++)
      {
          int b; string moves;
          cin >> b >> moves;
          int net = 0;
          for(auto ch: moves)
          {
              if(ch == 'U') net--;
              else if(ch =='D') net++;
          }
          int init = (a[i]+net)%10;
          if(init <0) init +=10;
          cout << init << " ";
      }
      cout << "\n";
  }

  return 0;
}
