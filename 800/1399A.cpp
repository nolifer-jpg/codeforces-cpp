#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t; cin >> t;
  while(t--)
  {
      int n; cin >> n;
      vector<int> arr(n);
      for(int i = 0; i<n; i++)
      {
          cin >> arr[i];
      }
      sort(arr.begin(), arr.end());
      bool counter = true;
      for(int i = 0; i<n-1; i++)
      {
          if(arr[i+1]-arr[i]>1)
          {
              counter = false;
          }
      }
      if(counter) cout << "YES" << endl;
      else cout << "NO" << endl;
  }

  return 0;
}
