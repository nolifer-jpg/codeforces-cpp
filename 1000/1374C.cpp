#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while(t--)
  {
      int n; cin >> n;
      string s; cin >> s;
      int max = 0, open = 0, close = 0;
      for(char c: s)
      {
            if( c == '(')
            {
                open ++;
            }
            else if(c == ')')
            {
                close ++;
            }
            if((close - open) >=max)
            {
                max = close - open;
            }
      }
      cout << max << endl;
  }
  return 0;
}
