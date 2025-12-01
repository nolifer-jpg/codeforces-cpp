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
      vector<int> initial(n);
      for(int i = 0; i<n; i++)
      {
          cin >> initial[i];
      }
      int l = 0, r=n-1;
      while(l<=r)
      {
          cout << initial[l] << " "; l++;
          if(l<=r)
          {
              cout << initial[r] << " "; r--;
          }
      }
      cout << "\n";
  }

  return 0;
}
